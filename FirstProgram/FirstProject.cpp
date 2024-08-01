#include <iostream>
using namespace std;

int main() {

/****************************
Structure of a C++ Program
*****************************/

	cout << "Hello World" << endl;

	int num1;
	int num2;
	double num3;

	cout << "Enter an integer: ";
	cin >> num1;
	cout << "Enter a second integer: ";
	cin >> num2;
	cout << "You entered " << num1 <<" and "<<num2 << endl;

	cout << "Enter two int separated with a space: ";
	cin >> num1 >> num2;
	cout << "You entered " << num1 << " and " << num2 << endl;

	cout << "Enter a double: ";
	cin >> num3;
	cout << "You entered " << num3 << endl;

	cout << "Enter an int ";
	cin >> num1;
	cout << "Enter a double ";
	cin >> num3;
	cout << "You entered " << num1 << " and " << num3 << endl;


/****************************
Variables and Constants
*****************************/


	

	cout << "Enter the width of the room: " << endl;
	int room_width{ 0 };
	cin >> room_width;

	cout << "Enter the length of the room: " << endl;
	int room_length{ 0 };
	cin >> room_length;

	int room_area = room_length * room_width;
	cout << "The area of the room is " << room_area << " mp" << endl;

	/****************************
	Character Type
	*****************************/
	char middle_initial{ 'G' };
	cout << "My middle initial is : " << middle_initial << endl;

	/****************************
	Integer Type
	*****************************/
	unsigned short int exam_score{ 55 };
	cout << "My exam score is " << exam_score << endl;

	int countries_reprezented{ 65 };
	cout << "There were " << countries_reprezented << " countries represented in my meeting" << endl;

	long people_in_romania{ 20610000 };
	cout << "There are about " << people_in_romania << " people in Romania" << endl;

	long long people_on_earth{ 7600000000 };
	cout << "There are about " << people_on_earth << " people on Earth" << endl;

	/****************************
	Floating point Type
	*****************************/
	float car_payment{ 535.54 };
	cout << "My car payment is " << car_payment << endl;

	double pi{ 3.14159 };
	cout << "PI is " << pi << endl;

	long double large_amount{ 2.7e120 };
	cout << large_amount << " is a very big number" << endl;

	/****************************
	Boolean Type
	*****************************/
	bool gameOver{ false };
	cout << "The value of gameOver is " << gameOver << endl;

	/****************************
	Overflow example
	*****************************/
	short value1{ 30000 };
	short value2{ 1000 };
	short product{ value1 * value2 };
	cout << "The prod of " << value1 << " and " << value2 << " is " << product <<endl;




	return 0;

}