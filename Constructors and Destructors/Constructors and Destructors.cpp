
#include <iostream>
#include <string>
using namespace std;

class Player
{

private:
	string name;
	int health;
	int xp;

public:
	void set_name(string name_value) {
		name = name_value;
	}
	Player() {
		cout << "No args constructor called" << endl;
	}
	Player(string name) {
		cout << "String args constructor called" << endl;
	}
	Player(string name, int health, int xp) {
		cout << "Three args constructor called" << endl;
	}
	~Player() {
		cout << "The DESTRUCTION CALLED " << endl;
	}
};

int main()
{
	{
		Player player1;
		player1.set_name("Player One");
	}

	{
		Player player2("Player Two");
		player2.set_name("Player Two");

		Player player3("Player Three", 100, 12);
		player3.set_name("Player Three");
	}

	Player* enemy = new Player;
	enemy->set_name("Enemy");

	Player* boss = new Player("BOSS", 200, 20);
	boss->set_name("BOSS");

	delete enemy;
	delete boss;
	return 0;

	

}
