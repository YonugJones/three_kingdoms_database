#include <database.hpp>
#include <warrior.hpp>
#include <string>
#include <iostream>

// method definitions
void Database::add_warrior(Warrior warrior)
{
  warriors.push_back(warrior);
}

void Database::display_all_warriors()
{
  for (int i = 0; i < warriors.size(); i++)
  {
    std::cout << warriors[i].get_name() << "\n";
  }
}

int Database::get_warrior_count()
{
  return warriors.size();
}