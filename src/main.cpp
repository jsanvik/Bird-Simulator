#include "Bird.hpp"

int main() {
  BirdFactory* factory;
  std::string input;

  // Select geographic location
  while ((input != "1" && input != "2")) {
    std::cout << "Pick a geographic location (enter 1 or 2): " << std::endl;
    std::cout << "[1] Sesame Street" << std::endl;
    std::cout << "[2] Muppet Studios" << std::endl;
    std::getline(std::cin, input);
    if ((input != "1" && input != "2")) {
      std::cout << input << " is not a valid option, please try again.";
    }
  }
  if (input == "1") {
    factory = new SesameFactory();
  } else {
    factory = new MuppetFactory();
  }

  Bird* feathered = factory->CreateFeatheredBird();
  Bird* bald = factory->CreateBaldBird();

  // Spring Behaviour
  std::cout << "Season: Spring" << std::endl << std::endl;
  feathered->springBehaviour();
  std::cout << std::endl;
  bald->springBehaviour();
  std::cout << std::endl;
  // Summer Behaviour
  std::cout << "Season: Summer" << std::endl << std::endl;
  feathered->summerBehaviour();
  std::cout << std::endl;
  bald->summerBehaviour();
  std::cout << std::endl;
  // Fall Behaviour
  std::cout << "Season: Fall" << std::endl << std::endl;
  feathered->fallBehaviour();
  std::cout << std::endl;
  bald->fallBehaviour();
  std::cout << std::endl;
  // Winter Behaviour
  std::cout << "Season: Winter" << std::endl << std::endl;
  feathered->winterBehaviour();
  std::cout << std::endl;
  bald->winterBehaviour();
  std::cout << std::endl << std::endl;

  std::cout << "END OF SIMULATION" << std::endl << std::endl;

  return 0;
}
