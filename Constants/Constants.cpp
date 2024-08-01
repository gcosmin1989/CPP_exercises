

#include <iostream>
using namespace std;

int main()
{
	
	const double price_small_room{ 25 };
	const double price_large_room{ 35 };

	cout << "hello, welcome to Carpet Cleaning Service " << endl << endl;

	cout << "How may small rooms do you want to cleand: ";
	int number_small_rooms{ 0 };
	cin >> number_small_rooms;

	cout << "How may large rooms do you want to cleand: ";
	int number_large_rooms{ 0 };
	cin >> number_large_rooms;
	cout << "========================================================" << endl;
	cout << "Estimate for carpet cleaning service:" << endl;
	cout << "Number of small rooms: " << number_small_rooms << endl;
	cout << "Number of large rooms: " << number_large_rooms << endl;
	
	cout << "Price per small room: " << price_small_room << "$" << endl;
	cout << "Price per big room: " << price_large_room << "$" << endl;
	double total_cost{ price_small_room * number_small_rooms + price_large_room * number_large_rooms };
	cout << "Cost: " << total_cost  << "$" << endl;


	const double tax(0.06);
	double tax_cost{ total_cost * tax };
	cout << "Tax: " << tax_cost << "$" << endl;
	cout << "========================================================" << endl;


	double total_estimate{ total_cost + tax_cost };
	cout << "Total estimation: " << total_estimate << "$" << endl;
	cout << "This estimate is valid for 30 days" << endl;
	
	return 0;



	
}
