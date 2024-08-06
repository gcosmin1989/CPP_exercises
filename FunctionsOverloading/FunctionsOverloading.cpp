#include<functional>
#include <iostream>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num) {
	cout << "Print int:" << num << endl;
}

void print(double num) {
	cout << "Print double:" << num << endl;
}

void print(string s) {
	cout << "Print string:" << s << endl;
}

void print(string s, string s1) {
	cout << "Print string string:" << s <<" "<<s1<< endl;
}

void print(vector<string> v) {
	cout << "Printing vector of strings: " << endl;
	for (auto s : v) {
		cout << s + " ";
	}
	cout << endl;
}

int main()
{
	print(100);
	print('A');
	print(123.5);
	print("String");

	string a{ "string of string" };
	print(a);
	print("Hey Hey Hey", a);

	vector <string> names{ "name1", "name2", "name3" };
	print(names);
	
}


