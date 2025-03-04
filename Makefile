# Revision History -- at the bottom of the document
################################################################################
# The targets in this file are used in .gitlab-ci.yml and  the files created
# are found in the .gitignore
################################################################################
# Changing any names below can change the target names which will require that
# you update .gitlab_ci.yml and .gitignore
################################################################################

################################################################################
# Variable definitions
################################################################################

# Executable names
PROJECT = birdSim

# Compilation command and flags
CXX=g++
CXXVERSION= -std=c++20
CXXFLAGS= ${CXXVERSION} -g
CXXWITHCOVERAGEFLAGS = ${CXXFLAGS} -fprofile-arcs -ftest-coverage
LINKFLAGS= -lgtest

# Directories
SRC_DIR = src
PROJECT_SRC_DIR = src
BIRDS_SRC_DIR = src/birds
SRC_INCLUDE = include
INCLUDE = -I ${SRC_INCLUDE}

# Tool variables
STATIC_ANALYSIS = cppcheck
STYLE_CHECK = cpplint
DOXY_DIR = docs/code

################################################################################
# Targets
################################################################################

################################################################################
# Clean-up targets
################################################################################

.PHONY: clean-docs
clean-docs:
	rm -rf docs/code/html

.PHONY: clean-exec
clean-exec:
	rm -rf ${PROJECT} ${PROJECT}.exe

.PHONY: clean-obj
clean-obj:
	rm -rf ${SRC}/*.o

.PHONY: clean-temp
clean-temp:
	rm -rf *~ \#* .\#* \
	${SRC_DIR}/*~ ${SRC_DIR}/\#* ${SRC_DIR}/.\#* \
	${BIRDS_SRC_DIR}/*~ ${BIRDS_SRC_DIR}/\#* ${BIRDS_SRC_DIR}/.\#* \		
	${SRC_INCLUDE}/*~ ${SRC_INCLUDE}/\#* ${SRC_INCLUDE}/.\#*	

.PHONY: clean
clean: clean-cov clean-docs clean-exec clean-obj clean-temp

################################################################################
# Compilaton targets
################################################################################

# default rule for compiling .cc to .o
%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

# Compilation targets

# compilation for making the project
# using the files in include, src, and src/project, but not test
${PROJECT}: ${SRC_DIR} ${PROJECT_SRC_DIR} # clean-exec
	${CXX} ${CXXFLAGS} -o ${PROJECT} ${INCLUDE} \
	${SRC_DIR}/*.cpp ${BIRDS_SRC_DIR}/*.cpp

################################################################################
# Test targets
################################################################################

# To perform all tests
all: memcheck docs static style

# To perform the memory checks
memcheck: ${PROJECT}
	valgrind --tool=memcheck --leak-check=yes --error-exitcode=1 ./${PROJECT}

# To perform the static check 
static: ${SRC_DIR}
	${STATIC_ANALYSIS} --verbose --enable=all ${SRC_DIR} ${BIRDS_SRC_DIR} \
	${SRC_INCLUDE} --suppress=missingInclude --error-exitcode=1

# To perform the style check
style: ${SRC_DIR} ${SRC_INCLUDE}
	${STYLE_CHECK} ${SRC_DIR}/* ${SRC_INCLUDE}/* ${BIRDS_SRC_DIR}/*

################################################################################
# Documentation target
################################################################################

# To produce the documentation
.PHONY: docs
docs: ${SRC_INCLUDE}
	doxygen ${DOXY_DIR}/doxyfile

# To produce version report
.PHONY: version
version:
	doxygen --version
	cppcheck --version
	cpplint --version
	gcc --version
	${VERSION}
	gcov --version
	lcov --version
	valgrind --version
# Ask Trent where this script can be found
#	gtest-config

################################################################################
# Revision History
################################################################################
# Updated: 2022-12-15 Nicole Wilson <n.wilson@uleth.ca>
#  Removed all references to OS as the pipelines are now running on Ubuntu
################################################################################
# Updated: 2022-10-19 Dr. J. Anvik <john.anvik@uleth.ca>
#  Changed the static command to make the pipeline fail on exit with errors.
################################################################################
# Updated: 2022-09-11 Nicole Wilson <n.wilson@uleth.ca>
#  Added reference to OS in setting of STYLE_CHECK.
#  This is a temporary measure until the pipelines are running on Ubuntu
################################################################################
