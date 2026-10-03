#include <string>

class Warrior
{
  // attributes
  std::string name;
  std::string style_name;
  int birth_year;
  int death_year;

public:
  // constructor declaration
  Warrior(std::string new_name, std::string new_style_name, int new_birth_year, int new_death_year);

  // destructor declaration
  ~Warrior();

  // methods declaration
  std::string get_name();
  std::string get_style_name();
  int get_birth_year();
  int get_death_year();
};