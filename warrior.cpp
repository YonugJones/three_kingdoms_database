#include "warrior.hpp"
#include <string>
#include <iostream>

// Constructor definition
Warrior::Warrior(std::string new_name, std::string new_style_name, int new_birth_year, int new_death_year)
    : name(new_name), style_name(new_style_name), birth_year(new_birth_year), death_year(new_death_year) {}

// Destructor definition
Warrior::~Warrior()
{
  std::cout << "Goodbye " << style_name << "\n";
}

// Method definitions
std::string Warrior::get_name() { return name; }
std::string Warrior::get_style_name() { return style_name; }
int Warrior::get_birth_year() { return birth_year; }
int Warrior::get_death_year() { return death_year; }