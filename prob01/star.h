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

#include <iomanip>
#include <iostream>
#include <string>

class Star {
 public:
  // ====================== YOUR CODE HERE ======================
  // Define the following members for the Star class:
  //
  //   1. One member variable representing the name of the star,
  //      and one representing the solar radius of the star.
  //   2. A constructor, which initializes the name of the star,
  //      and the radius of the star. The constructor should
  //      print that the star was born to the terminal.
  //   3. A destructor that prints to the terminal that the star
  //      was destroyed (i.e. went supernova), and print how many
  //      times the volume of the sun that the star was.
  //   4. An accessor function, `GetName` for the star's name.
  // ============================================================
  Star(std::string name, double solar_radius);
  ~Star();
  std::string GetName();

 private:
  std::string name_;
  double solar_radius_;
};