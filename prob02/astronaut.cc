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

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Astronaut class.
// ===================================================================
Astronaut::Astronaut(std::string name, graphics::Color color)
    : name_(name), color_(color) {}
std::string Astronaut::GetName() const { return name_; }
graphics::Color Astronaut::GetColor() const { return color_; }
std::string Astronaut::GetIconFilename() const { return "astronaut.bmp"; }
