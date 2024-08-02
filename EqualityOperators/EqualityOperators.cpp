
#include <iostream>
using namespace std;


int main()
{
	bool equal_result{ false };
	bool not_equal_result{ false };

	int num1{}, num2{};
	cout << boolalpha;
	cout << "Enter two int separated by a space: ";
	cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 != num2);
	cout << "Comparison result(equals): " << equal_result << endl;
	cout << "Comparison result(not equals): " << not_equal_result << endl;

	char char1{},char2{};
	cout << boolalpha;
	cout << "Enter two char separated by a space: ";
	cin >> char1 >> char2;
	equal_result = (char1 == char2);
	not_equal_result = (char1 != char2);
	cout << "Comparison result(equals): " << equal_result << endl;
	cout << "Comparison result(not equals): " << not_equal_result << endl;


	double double1{}, double2{};
	cout << boolalpha;
	cout << "Enter two doubles separated by a space: ";
	cin >> double1 >> double2;
	equal_result = (double1 == double2);
	not_equal_result = (double1 != double2);
	cout << "Comparison result(equals): " << equal_result << endl;
	cout << "Comparison result(not equals): " << not_equal_result << endl;

	cout << boolalpha;
	cout << "Enter a doubles and an int separated by a space: ";
	cin >> num1 >> double1;
	equal_result = (num1 == double1);
	not_equal_result = (num1 != double1);
	cout << "Comparison result(equals): " << equal_result << endl;
	cout << "Comparison result(not equals): " << not_equal_result << endl;
}


