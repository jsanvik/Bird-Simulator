#include "Nest.hpp"
Material::Material() {}
Material::~Material() {
  if (previous != nullptr) {
    delete previous;
  }
}
std::string Nest::getDescription() { return description; }
std::string Material::getDescription() {
  if (previous != nullptr) {
    return description + " " + previous->getDescription();
  } else {
    return description;
  }
}
BuiltNest::BuiltNest() { description = "what a lovely nest!"; }
std::string BuiltNest::getDescription() { return description; }

LilyPad::LilyPad(Nest* prev) {
  previous = prev;
  description = "a green Lily Pad,";
}
Newspaper::Newspaper(Nest* prev) {
  previous = prev;
  description = "a tattered Newspaper,";
}
Feather::Feather(Nest* prev) {
  previous = prev;
  description = "a yellow feather,";
}
SoapDish::SoapDish(Nest* prev) {
  previous = prev;
  description = "a pink soap dish,";
}
AmericanWhey::AmericanWhey(Nest* prev) {
  previous = prev;
  description = "the American Way,";
}
