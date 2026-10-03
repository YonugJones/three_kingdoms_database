#include "warrior.hpp"
#include <string>
#include <iostream>

// Constructor definition
Warrior::Warrior(std::string new_name)
    : name(new_name) {}

// Destructor definition
Warrior::~Warrior()
{
  std::cout << "Goodbye " << name << "\n";
}

// Method definitions
std::string Warrior::get_name() { return name; }
// std::string Warrior::get_style_name() { return style_name; }
// int Warrior::get_birth_year() { return birth_year; }
// int Warrior::get_death_year() { return death_year; }