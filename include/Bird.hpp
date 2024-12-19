#ifndef BIRD_HPP
#define BIRD_HPP

#include <iostream>
#include <string>
#include <vector>

#include "Nest.hpp"

class Bird {
 public:
  // Spring Behaviours
  void springBehaviour();
  virtual std::string migrateNorth() = 0;
  virtual std::string buildNest() = 0;
  virtual std::string findMate() = 0;
  // Summer Behaviours
  void summerBehaviour();
  virtual std::string RaiseChildren() = 0;
  virtual std::string birdSong() = 0;
  // Fall Behaviours
  void fallBehaviour();
  virtual std::string carvePumpkin() = 0;
  virtual std::string migrateSouth() = 0;
  // Winter Behaviours
  void winterBehaviour();
  virtual std::string fattenUp() = 0;
  virtual std::string stayWarm() = 0;

 protected:
  std::string name;
  Nest* nest;
};

class BirdFactory {
 public:
  virtual Bird* CreateBaldBird() = 0;
  virtual Bird* CreateFeatheredBird() = 0;

 protected:
};

class SesameFactory : public BirdFactory {
 public:
  Bird* CreateBaldBird() override;
  Bird* CreateFeatheredBird() override;

 protected:
};

class MuppetFactory : public BirdFactory {
 public:
  Bird* CreateBaldBird() override;
  Bird* CreateFeatheredBird() override;

 protected:
};

class FeatheredBird : public Bird {
 public:
 protected:
};

class BigBird : public FeatheredBird {
 public:
  // Spring Behaviours
  // void springBehaviour() override;
  std::string migrateNorth() override;
  std::string buildNest() override;
  std::string findMate() override;
  // Summer Behaviours
  // std::string summerBehaviour() override;
  std::string RaiseChildren() override;
  std::string birdSong() override;
  // Fall Behaviours
  // std::string fallBehaviour() override;
  std::string migrateSouth() override;
  std::string carvePumpkin() override;
  // Winter Behaviours
  // std::string winterBehaviour() override;
  std::string fattenUp() override;
  std::string stayWarm() override;

 protected:
};

class SamEagle : public FeatheredBird {
 public:
  // Spring Behaviours
  // void springBehaviour() override;
  std::string migrateNorth() override;
  std::string buildNest() override;
  std::string findMate() override;
  // Summer Behaviours
  // std::string summerBehaviour() override;
  std::string RaiseChildren() override;
  std::string birdSong() override;
  // Fall Behaviours
  // std::string fallBehaviour() override;
  std::string migrateSouth() override;
  std::string carvePumpkin() override;
  // Winter Behaviours
  // std::string winterBehaviour() override;
  std::string fattenUp() override;
  std::string stayWarm() override;

 protected:
};

class BaldBird : public Bird {
 public:
 protected:
};

class RubberDucky : public BaldBird {
 public:
  // Spring Behaviours
  // void springBehaviour() override;
  std::string migrateNorth() override;
  std::string buildNest() override;
  std::string findMate() override;
  // Summer Behaviours
  // std::string summerBehaviour() override;
  std::string RaiseChildren() override;
  std::string birdSong() override;
  // Fall Behaviours
  // std::string fallBehaviour() override;
  std::string migrateSouth() override;
  std::string carvePumpkin() override;
  // Winter Behaviours
  // std::string winterBehaviour() override;
  std::string fattenUp() override;
  std::string stayWarm() override;

 protected:
};

class Kermit : public BaldBird {
 public:
  // Spring Behaviours
  // void springBehaviour() override;
  std::string migrateNorth() override;
  std::string buildNest() override;
  std::string findMate() override;
  // Summer Behaviours
  // std::string summerBehaviour() override;
  std::string RaiseChildren() override;
  std::string birdSong() override;
  // Fall Behaviours
  // std::string fallBehaviour() override;
  std::string migrateSouth() override;
  std::string carvePumpkin() override;
  // Winter Behaviours
  // std::string winterBehaviour() override;
  std::string fattenUp() override;
  std::string stayWarm() override;

 protected:
};

#endif
