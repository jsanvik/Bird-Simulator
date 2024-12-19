#include "Bird.hpp"

// Seasonal Behavoiour templates
void Bird::springBehaviour() {
  std::cout << migrateNorth() << std::endl;
  std::cout << buildNest() << std::endl;
  std::cout << findMate() << std::endl;
}
void Bird::summerBehaviour() {
  std::cout << RaiseChildren() << std::endl;
  std::cout << birdSong() << std::endl;
}
void Bird::fallBehaviour() {
  std::cout << migrateSouth() << std::endl;
  std::cout << carvePumpkin() << std::endl;
}
void Bird::winterBehaviour() {
  std::cout << fattenUp() << std::endl;
  std::cout << stayWarm() << std::endl;
}

// Big Bird

// Spring Behaviours
std::string BigBird::migrateNorth() {
  return "Big Bird walks to the north end of Sesame Street.";
}
std::string BigBird::buildNest() {
  nest = new Feather(new Newspaper(new Feather(new BuiltNest())));
  return "Big bird carefully constructs a nest made of " +
         nest->getDescription();
}
std::string BigBird::findMate() {
  return "Big bird looks for the biggest mate.";
}
// Summer Behaviours
std::string BigBird::RaiseChildren() { return "Big bird raises Bigger birds."; }
std::string BigBird::birdSong() {
  return "Big bird sings the Alpha-baba-twinkle song";
}
// Fall Behaviours
std::string BigBird::migrateSouth() {
  return "Big Bird walks to the south end of Sesame Street";
}
std::string BigBird::carvePumpkin() {
  return "Big Bird carves a pumpkin with a happy face.";
}
// Winter Behaviours
std::string BigBird::fattenUp() {
  return "Big bird eats a New York Cherry Cheesecake.";
}
std::string BigBird::stayWarm() { return "Big bird puts on a scarf."; }

// Spring Behaviours
std::string RubberDucky::migrateNorth() {
  return "Rubber ducky floats to the north end of the tub.";
}
std::string RubberDucky::buildNest() {
  nest = new SoapDish(new Feather(new BuiltNest()));
  return "Rubber ducky has no appendages, but somehow manages to construct a "
         "nest made of " +
         nest->getDescription();
}
std::string RubberDucky::findMate() {
  return "Rubber Ducky looks for the squeakiest mate.";
}
// Summer Behaviours
std::string RubberDucky::RaiseChildren() {
  return "Rubber ducky raises little fellas who are cute and yellow and "
         "chubby.";
}
std::string RubberDucky::birdSong() { return "Rubber ducky squeaks."; }
// Fall Behaviours
std::string RubberDucky::migrateSouth() {
  return "Rubber ducky floats to the south end of the tub.";
}
std::string RubberDucky::carvePumpkin() {
  return "Big Bird attempts to carve a pumpkin but dropped the knife in the "
         "tub.";
}
// Winter Behaviours
std::string RubberDucky::fattenUp() {
  return "Rubber ducky fattens up on soap bubbles.";
}
std::string RubberDucky::stayWarm() {
  return "Rubber ducky turns up the heat of the bathwater";
}

// Spring Behaviours
std::string SamEagle::migrateNorth() {
  return "Sam Eagle flies to Alaska - the American way!";
}
std::string SamEagle::buildNest() {
  nest = new SoapDish(new Newspaper(new AmericanWhey(new BuiltNest())));
  return "Sam Eagle patriotically constructs a nest made of " +
         nest->getDescription() + " - \nAMERICA!";
}
std::string SamEagle::findMate() {
  return "Sam Eagle looks for the most American mate.";
}
// Summer Behaviours
std::string SamEagle::RaiseChildren() {
  return "Sam Eagle raises his children - the American way!";
}
std::string SamEagle::birdSong() {
  return "Sam Eagle sings the National Anthem.";
}
// Fall Behaviours
std::string SamEagle::migrateSouth() {
  return "Sam Eagle flies to Florida - the American way!";
}
std::string SamEagle::carvePumpkin() {
  return "Sam Eagle carves a pumpkin - the American way!";
}
// Winter Behaviours
std::string SamEagle::fattenUp() {
  return "Sam Eagle stuffs himself silly at McDonalds - the American way!";
}
std::string SamEagle::stayWarm() {
  return "Sam Eagle causes global warming, thus staying warm in winter.";
}

// Spring Behaviours
std::string Kermit::migrateNorth() {
  return "Kermit swims to the north end of the swamp.";
}
std::string Kermit::buildNest() {
  nest = new LilyPad(new Newspaper(new LilyPad(new BuiltNest())));
  return "Kermit constructs a frog nest made of " + nest->getDescription();
}
std::string Kermit::findMate() { return "Kermit is looking for Miss Piggy."; }
// Summer Behaviours
std::string Kermit::RaiseChildren() {
  return "Kermit raises little piggy-tadpoles.";
}
std::string Kermit::birdSong() { return "Kermit plays the banjo."; }
// Fall Behaviours
std::string Kermit::migrateSouth() {
  return "Kermit swims to the south end of the swamp.";
}
std::string Kermit::carvePumpkin() {
  return "Kermit carves a pumpkin that looks like Miss Piggy";
}
// Winter Behaviours
std::string Kermit::fattenUp() {
  return "Kermit stuffs himself silly with lots of flies.";
}
std::string Kermit::stayWarm() {
  return "Kermit gathers with his friends by the fire.";
}

Bird* SesameFactory::CreateBaldBird() { return new RubberDucky(); }
Bird* MuppetFactory::CreateBaldBird() { return new Kermit(); }
Bird* SesameFactory::CreateFeatheredBird() { return new BigBird(); }
Bird* MuppetFactory::CreateFeatheredBird() { return new SamEagle(); }
