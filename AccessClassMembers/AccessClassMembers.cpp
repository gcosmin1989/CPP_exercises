

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    //atributes
public:
    string name;
    int health;
    int xp;

    //methods
    void talk(string text_to_say) {
        cout << name << " sais " << text_to_say << endl;
    }
    bool is_dead();


};

class Account {
public:
    string name{ "Account" };
    double balance{ 0.0 };


    bool deposit(double bal){
        balance += bal;
        cout << "In deposit" << endl;
        return true;

    }
    bool witdraw(double bal)
    {
        balance -= bal;
        cout << "In withdraw" << endl;
        return true;
    }


};
int main()
{
    Account frank_account;
    frank_account.name = "Frank account";
    frank_account.balance= 5000.0;
    frank_account.deposit(2000);
    frank_account.witdraw(500);
    cout << frank_account.balance << endl;


    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("I am here");

    Player* enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");

}



