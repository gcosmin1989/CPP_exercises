 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int num{ 10 };

	cout << "Value of num is: " << num << endl;
	cout << "Size of num is: " << sizeof num << endl;
	cout << "Address of num is: " << &num << endl;

	int* p;
	
	cout << "Size of p is: " << sizeof p << endl;
	cout << "Address of p is: " << &p << endl;

	p = nullptr;
	cout << "Value of p is: " << p << endl;

	int* p1;
	double* p2;
	unsigned long long* p3;
	vector<string>* p4;
	string* p5;

	cout << "size of p1 is " << sizeof p1 << endl;
	cout << "size of p2 is " << sizeof p2 << endl;
	cout << "size of p3 is " << sizeof p3 << endl;
	cout << "size of p4 is " << sizeof p4 << endl;
	cout << "size of p5 is " << sizeof p5 << endl;


	int score{ 10 };
	int* score_ptr{ nullptr };
	score_ptr = &score;

	cout << "value of score " << score << endl;
	cout << "Address of score " << &score << endl;
	cout << "Value of score_ptr " << score_ptr << endl;


}

