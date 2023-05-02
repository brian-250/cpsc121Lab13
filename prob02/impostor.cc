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

#include "impostor.h"

#include <iostream>

#include "crewmate.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Impostor class.
// ===================================================================
Impostor::Impostor(std::string name, graphics::Color color)
    : Astronaut(name, color) {}
Impostor::Impostor() : Astronaut("bobby", graphics::Color(255, 0, 0)) {}
void Impostor::Kill(Crewmate& crewmate) {
  crewmate.SetIsAlive(false);
  std::cout << Impostor::GetName() << " killed " << crewmate.GetName() << "\n";
}
