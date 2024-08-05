
#include <iostream>
using namespace std;


int main()
{
	int num{};
	const int min{ 10 };
	const int max{ 100 };

	cout << "Enter a num between " << min << " and " << max<<": " << endl;
	cin >> num;

	if (num >= min) {
		cout << "=====If Statement 1=====" << endl;
		cout << num <<" is greater than " << min << endl;
	
		int dif{};
		dif = num - min;
		cout << num << " is " << dif << " greater than " << min << endl;
	}
	if(num <= max){
		cout << "=====If Statement 2=====" << endl;
		cout << num << " is less than " << max << endl;

		int dif{};
		dif = max - num;
		cout << num << " is " << dif << " less than " << endl;
	}

	if (num <= max) {
		cout << "=====If Statement 2=====" << endl;
		cout << num << " is less than " << max << endl;

		int dif{};
		dif = max - num;
		cout << num << " is " << dif << " less than " << endl;
	}

	if (num <= max && num >= min) {
		cout << "=====If Statement 3=====" << endl;
		cout << num << " is in the boundries of " << min<<" and "<<max << endl;

	}

	if (num == max || num == min) {
		cout << "=====If Statement 4=====" << endl;
		cout << num << " is on the boundries of " << min << " or " << max << endl;

	}

}
