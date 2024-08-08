

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    //atributes
    string name{ "Player" };
    int health{ 100 };
    int xp{ 3 };

    //methods
    void talk(string);
    bool is_dead();


};

class Account {
    string name{ "Account" };
    double balance{ 0.0 };


    bool deposit(double);
    bool witdrawl(double);


};
int main()
{
    Account frank_accout;
    Account jim_account;
 

    Player frank;
    Player hero;

    
    Player players[]{ frank, hero };

    vector <Player> player_vect;
    player_vect.push_back(hero);

    Player* enemy{ nullptr };
    enemy = new Player;
    delete enemy;
    return 0;
}



