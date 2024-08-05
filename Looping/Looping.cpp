
#include<vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	for (int i{ 1 }; i <= 10; i++) 
		cout << i << endl;
	

	for (int i{ 1 }; i <= 10; i+=2) 
		cout << i << endl;
	

	for (int i{10}; i > 0; i--)
		cout << i << endl;

	for (int i{ 1 }, j{ 5 }; i <= 5; i++)
		cout << i << " + " << j << " = " << i + j << endl;



	cout << "==============Range-based=================" << endl;
	int scores[]{ 100, 90, 87 };
	for (auto score : scores)
		cout << score << endl;

	for (auto key : "Cosmin")
		cout << key << endl;


	cout << "=====================Exercises=================" << endl;

	vector<double> temperatures{25.43, 34.91, 24.12, 30.63};
	double average_temp{};
	double total{};

	for (auto temperature : temperatures)
		total += temperature;
	if (temperatures.size() > 0)
		average_temp = total / temperatures.size();
	cout << fixed << setprecision(1);
	cout << "The average temperature is: " << average_temp << endl; 
	

	for (auto val : { 1,2,3,4,5 })
		cout << val << endl;

	for (auto c : "This is a test")
		if (c != ' ')
			cout << c << endl;

	for (auto c : "Another Test")
		if (c == ' ')
			cout << "\t";
		else
			cout << c;


	cout << "==============While LOOP=================" << endl;

	int num{};
	cout << "Enter a positive int - start the countdown: ";
	cin >> num;
	
	while (num > 0){
		cout << num << endl;
		--num;
	}

	cout << "Blastoff!" << endl;

	int num1{};
	cout << "Enter a positive int to count up to: ";
	cin >> num1;

	int i{ 1 };
	while (num1 >= i) {
		cout << i << endl;
		i++;

	}

	int number{};
	cout << "Enter an int less than 100: ";
	cin >> number;

	while (number >= 100) {
		cout << "Enter an int less than 100: ";
		cin >> number;

	}
	cout << "Thanks!" << endl;


	bool done{ false };
	int number1{ 0 };

	while (!done) {
		cout << "Enter an int between 1 and 5: ";
		cin >> number1;
		if (number1 <= 1 || number1 >= 5)
			cout << "Out of range!" << endl;
		else
		{
			cout << "Thanks!" << endl;
			done = true;
		}
	}

	cout << "==============do-while LOOP=================" << endl;

	char selection{};

	do {
		cout << "1. Number 1 Section" << endl;
		cout << "2. Number 2 Section" << endl;
		cout << "3. Number 3 Section" << endl;
		cout << "Q. Quit" << endl;
		cin >> selection;
		if (selection == '1')
			cout << "You selected " << selection << endl;
		else if (selection == '2')
			cout << "You selected " << selection << endl;
		else if (selection == '3')
			cout << "You selected " << selection << endl;
		else if (selection == 'q' || selection == 'Q')
			cout << "You selected " << selection << endl;
		else
			cout << "Selection unavailable" << endl;
	} while (selection != 'q' && selection != 'Q');

	}


