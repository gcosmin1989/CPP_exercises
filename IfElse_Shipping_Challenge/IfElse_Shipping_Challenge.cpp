
#include <iostream>
using namespace std;


int main()
{
	int length{}, width{}, height{};

	cout << "Input your package dimensions length, width, height: " << endl;
	cin >> length >> width >> height;
	bool package_dimension{ length > 10 || width > 10 || height > 10 };
	if (length > 10 || width > 10 || height > 10) {
		cout << "Your package is to big to be deliverd" << endl;
	}
	else {
		double base_cost{ 2.50 };
		double surcharge1{ 0.10 };
		double surcharge2{ 0.25 };
		int surcharge1_volume{ 100 };
		int surcharge2_volume{ 500 };
		int package_volume{ length * height * width };
		if (package_volume <= surcharge1) {
			cout << "Your delivery cost is " << base_cost << " $" << endl;
		}
		else if (package_volume > surcharge1_volume && package_volume <= surcharge2_volume) {
			cout << "Your delivery cost is " << base_cost * surcharge1 + base_cost << " $" << endl;
		}
		else if (package_volume > surcharge2_volume) {
			cout << "your delivery cost has 25% surcharge " << base_cost * surcharge2 + base_cost << "$" << endl;
		}
	}
}
