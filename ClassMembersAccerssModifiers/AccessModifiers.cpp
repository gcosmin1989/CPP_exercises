
#include <iostream>
using namespace std;

class Player {
private:
	string name{"Player1"};
	int health;
	int xp;

public:
	void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
	bool is_dead();
};

int main()
{
	Player frank;
	//frank.name ="Frank";
	//frank.xp =15;
	frank.talk("Hello");
}
