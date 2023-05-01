// Brian Milian
// CPSC 121L-01
// 2023-04-25
// brianmilian@csu.fullerton.edu
// @brian-250
//
// Lab 13-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
//
// This program creates Star objects and outputs messages using
// the constructor and destructor
//

#include "star.h"

#include <iomanip>
#include <iostream>
#include <string>

// ========================= YOUR CODE HERE =========================
// This implementation file (star.cc) is where you should implement
// the member functions declared in the header (star.h), only
// if you didn't implement them inline within star.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Star class.
// ===================================================================
Star::Star(std::string name, double solar_radius)
    : name_(name), solar_radius_(solar_radius) {
  std::cout << "The star " << name_ << " was born.\n";
  std::cout << "Created star " << name_ << "\n";
}
Star::~Star() {
  std::cout << std::setprecision(2) << std::fixed << "The star " << name_
            << " has gone supernova. It was " << (solar_radius_ * solar_radius_)
            << " times the volume of our sun.\n";
}
std::string Star::GetName() {
  return name_;
}
