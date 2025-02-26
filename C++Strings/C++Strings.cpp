
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	string s0;
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "kiwi" };
	string s4{ "apple" };
	string s5{ s1 };
	string s6{ s1, 0 , 3 };
	string s7{ 10, 'X' };

	cout << s0 << endl;
	cout << s0.length() << endl;
	cout << "========Initialization=============" << endl;

	cout << "s1 is initialized to: " << s1 << endl;
	cout << "s2 is initialized to: " << s2 << endl;
	cout << "s3 is initialized to: " << s3 << endl;
	cout << "s4 is initialized to: " << s4 << endl;
	cout << "s5 is initialized to: " << s5 << endl;
	cout << "s6 is initialized to: " << s6 << endl;
	cout << "s7 is initialized to: " << s7 << endl;

	cout << "========Comparison=============" << endl;

	cout << boolalpha; 
	cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
	cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
	cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
	cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
	cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
	cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
	cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

	cout << "========Assigment=============" << endl;

	s1 = "Watermelon";
	cout << "s1 is now: " << s1 << endl;
	s2 = s1;
	cout << "s2 is now: " << s2 << endl;
	s3 = "Cosmin";
	cout << "s3 is now: " << s3 << endl;
	s3[0] = 'F';
	cout << "s3 is now: " << s3 << endl;
	s3.at(0) = 'Z';
	cout << "s3 is now: " << s3 << endl;

	cout << "========Concatenation=============" << endl;

	s3 = "Watermelone";
	s3 = s5 + " and " + s2 + " juice";
	cout << s3 << endl;
	cout << s5 + " and " + s2 + " juice" << endl; 

	cout << "========Looping=============" << endl;
	
	for (size_t i{ 0 }; i < s1.length(); i++)
		cout << s1.at(i);
	cout << endl;

	for (char c : s1)
		cout << c;
	cout << endl;

	cout << "========Substring=============" << endl;
	s1 = "This is a test";
	cout << s1.substr(0, 4) << endl;
	cout << s1.substr(5, 2) << endl;
	cout << s1.substr(8, 1) << endl;
	cout << s1.substr(10,4) << endl;
	
	cout << "========Erase=============" << endl;

	s1.erase(0, 5);
	cout << s1 << endl;

	cout << "========Get Line=============" << endl;

	string full_name{};
	cout << "Enter full name: " << endl;
	getline(cin, full_name);
	cout << full_name << endl;

	cout << "========Get Line=============" << endl;
}

