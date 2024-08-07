#include <iostream>
#include < string>
#include<vector>

using namespace std;

int main() {

	int score{ 100 };
	int* score_ptr{ &score };

	cout << *score_ptr << endl;
	cout << score_ptr << endl;
	cout << &score << endl;

	*score_ptr = 200;

	cout << *score_ptr << endl;
	cout << score << endl;

	double high_temp{ 35.4 };
	double low_temp{ 22.2 };

	double* temp_ptr{ &high_temp };
	cout << *temp_ptr << endl;
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl;
}