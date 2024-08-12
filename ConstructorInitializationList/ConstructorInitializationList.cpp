

#include <iostream>

class Player {

private:
    std::string name;
    int health;
    int xp;
public:
    Player();
    Player(std::string name_val);
    Player(std::string name_val, int health, int xp);
};
Player::Player() :name{ "None" }, health{ 0 }, xp{ 0 } {}


int main()
{
    std::cout << "Hello World!\n";
}

