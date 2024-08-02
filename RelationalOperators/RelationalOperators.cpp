

#include <iostream>
using namespace std;

int main()
{

	int num1{}, num2{};
	cout << boolalpha;
	cout << "Enter two int separated by space: " << endl;
	cin >> num1 >> num2;
	cout << num1 << " < " << num2 <<": "<< (num1 < num2) << endl;
	cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
	cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
	cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;


	const int lower{ 10 };
	const int upper{ 20 };

	cout << "Enter an int that is greater than " << lower  << endl;
	cin >> num1;
	cout << num1 << " > " << lower << " " << (num1 > lower)   << endl;
	cout << "Enter an int that is less than or equal to " << upper  << endl;
	cin >> num1;
	cout << num1 << " < " << upper << " " << (num1 <= upper) << endl;

}

 