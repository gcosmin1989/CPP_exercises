

#include <iostream>
using namespace std;

int main()
{
	int num{};
	const int target{ 10 };

	cout << "Enter a number and I'll compare it to " << target << endl;
	cin >> num;

	if (num >= target) {
		cout << "=====" << endl;
		cout << num << " is greater than or equal to " << target << endl;
		int dif{ num - target };
		cout << num << " is " << dif << " greater than " << target << endl;
	}
	else {
		cout << "=====" << endl;
		cout << num << " is less than or equal to " << target << endl;
		int dif{ target - num };
		cout << num << " is " << dif << " less than " << target << endl;
	}

	cout << "==================" << endl;

	int scores{};
	cout << "enter your score on the exam (0-100)" << endl;
	cin >> scores;
	char letter_grade{};
	if (scores >= 0 and scores <= 100) {
		if (scores >= 90) {
			letter_grade = 'A';

		}
		else if (scores >= 80) {
			letter_grade = 'B';

		}
		else if (scores >= 70) {
			letter_grade = 'C';

		}
		else if (scores >= 60) {
			letter_grade = 'D';

		}
		else {
			letter_grade = 'F';
		}
		cout << "Your Grade is: " << letter_grade << endl;

		if (letter_grade == 'F') {
			cout << "You have to repeat your exam" << endl;
		}
		else {
			cout << "You passed the exam" << endl;
		}
	}else {
		cout << scores << " is not in the rage" << endl;
	}

}

