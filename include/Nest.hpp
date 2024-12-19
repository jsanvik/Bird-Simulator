#ifndef NEST_HPP
#define NEST_HPP

#include <string>

class Nest {
 public:
  virtual std::string getDescription() = 0;

 protected:
  std::string description;
};

class BuiltNest : public Nest {
 public:
  BuiltNest();
  std::string getDescription() override;

 protected:
};

class Material : public Nest {
 public:
  Material();
  Material(Nest* prev);
  ~Material();
  std::string getDescription() override;

 protected:
  Nest* previous;
};

class LilyPad : public Material {
 public:
  LilyPad(Nest* prev);

 protected:
};

class Newspaper : public Material {
 public:
  Newspaper(Nest* prev);

 protected:
};

class Feather : public Material {
 public:
  Feather(Nest* prev);

 protected:
};

class SoapDish : public Material {
 public:
  SoapDish(Nest* prev);

 protected:
};

class AmericanWhey : public Material {
 public:
  AmericanWhey(Nest* prev);

 protected:
};

#endif
