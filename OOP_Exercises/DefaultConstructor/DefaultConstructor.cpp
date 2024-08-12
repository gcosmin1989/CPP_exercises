
#include <iostream>

class Player
{
private:
    std::string name;
    int health;
    int xp;

public:
    void set_name(std::string name_value) {
        name = name_value;
    }
    std::string get_name() {
      return name;
    }
    Player() {
        name = "None";
        health = 100;
        xp = 0;
    }

    Player(std::string name_val, int health_val, int xp_val) {
        name = name_val;
        health = health_val;
        xp = xp_val;
    }
    
};



int main()
{
    Player player1;
    std::cout << player1.get_name() << std::endl;
    player1.set_name("Jucator 1");
    std::cout << player1.get_name() << std::endl;
    Player player2{ "Jucator 2", 100, 2 };
    std::cout << player2.get_name();

}
