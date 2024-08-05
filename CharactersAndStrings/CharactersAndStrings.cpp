#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char full_name[50]{};
	char temp[50]{};

	//cout << first_name; <-- Garbage
	cout << "Enter your first name " << endl;
	cin >> first_name;

	cout << "Enter your last name " << endl;
	cin >> last_name;

	cout << "Hello," << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
	cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters" << endl;

	strcpy_s(full_name, first_name);
	strcat_s(full_name, " ");
	strcat_s(full_name, last_name);
	cout << "Your full name is " << full_name << endl;
	
	cout << "========================" << endl;
	cout << "Enter your full name: " << endl;
	cin.getline(full_name, 50);
	cout << "Your full name is : " << full_name;

}
 
