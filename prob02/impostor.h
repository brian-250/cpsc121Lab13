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

#include "astronaut.h"
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

// ========================= YOUR CODE HERE =========================
// Define the Impostor class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Impostor : public Astronaut {
 public:
  Impostor(std::string name, graphics::Color color);
  Impostor();
  void Kill(Crewmate& crewmate);
};

#endif  // IMPOSTOR_H
