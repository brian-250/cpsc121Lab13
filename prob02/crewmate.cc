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

#include "crewmate.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Crewmate class.
// ===================================================================
Crewmate::Crewmate(std::string name, graphics::Color color)
    : Astronaut(name, color), alive_(true), task_count_(0) {}
Crewmate::Crewmate()
    : Astronaut("no name", graphics::Color(0, 0, 0)),
      alive_(true),
      task_count_(0) {}
bool Crewmate::GetIsAlive() const { return alive_; }
void Crewmate::SetIsAlive(bool alive) { alive_ = alive; }
int Crewmate::GetTaskCount() const { return task_count_; }
void Crewmate::DoTask(std::string task) {
  task_count_++;
  std::cout << Crewmate::GetName() << " is doing " << task << "\n";
}
graphics::Color Crewmate::GetColor() {
  if (alive_) {
    return Astronaut::GetColor();
  } else {
    return graphics::Color((Astronaut::GetColor().Red() + 256) / 2,
                           (Astronaut::GetColor().Green() + 256) / 2,
                           (Astronaut::GetColor().Blue() + 256) / 2);
  }
}
std::string Crewmate::GetIconFilename() const {
  if (alive_) {
    return "astronaut.bmp";
  } else {
    return "ghost.bmp";
  }
}
