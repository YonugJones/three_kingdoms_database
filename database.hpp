#include <vector>
#include <warrior.hpp>

class Database
{
  std::vector<Warrior> warriors;

public:
  void add_warrior(Warrior warrior);
  void display_all_warriors();
  int get_warrior_count();
};