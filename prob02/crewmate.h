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

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
// ===================================================================
class Crewmate : public Astronaut {
 public:
  Crewmate(std::string name, graphics::Color color);
  Crewmate();
  bool GetIsAlive() const;
  void SetIsAlive(bool alive);
  int GetTaskCount() const;
  void DoTask(std::string task);
  graphics::Color GetColor();
  std::string GetIconFilename() const;

 private:
  bool alive_;
  int task_count_;
};

#endif  // CREWMATE_H
