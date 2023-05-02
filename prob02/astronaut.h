// Brian Milian
// CPSC 121L-01
// 2023-04-25
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 13-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
//
// This program uses inheritance to have derived classes call the
// member functions of the base class
//

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

// ========================= YOUR CODE HERE =========================
// Define the Astronaut class here. Refer to the README for instructions.
// ===================================================================
class Astronaut {
 public:
  Astronaut(std::string name, graphics::Color color);
  std::string GetName() const;
  graphics::Color GetColor() const;
  std::string GetIconFilename() const;

 private:
  std::string name_;
  graphics::Color color_;
};

#endif  // ASTRONAUT_H
