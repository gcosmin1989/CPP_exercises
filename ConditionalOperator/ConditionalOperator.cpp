
#include <iostream>
using namespace std;

int main()
{
	int num{ };
	cout << "Enter an int" << endl;
	cin>> num;

	if (num % 2==0) {
		cout << num << " is even " << endl;
	}
	else {
		cout << num << " is odd" << endl;
	}

	cout << num << " is " << ((num % 2 == 0) ? "even" : "odd") << endl;

}
