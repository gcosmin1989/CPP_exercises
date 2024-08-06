
#include <iostream>
#include <cmath>


using namespace std;


int main()
{
	double num{};
	double power{};
	cout << "Enter a number: " << endl;
	cin >> num;
	cout << "The square root of " << num << " is " << sqrt(num) << endl;
	cout << "The cubed root of " << num << " is " << cbrt(num) << endl;
	cout << "Enter a power: " << endl;
	cin >> power;
	cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;

}

