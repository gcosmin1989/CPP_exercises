

#include <iostream>
using namespace std;

int main()
{
	int num{};
	const int lower{ 10 };
	const int upper{ 20 };

	cout << boolalpha;
	cout << "Enter an int - bounds are " << lower << " and " << upper << ": " << endl;
	cin >> num;
	
	bool within_bounds{ false };

	within_bounds = (num > lower and num < upper);
	cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

	bool outside_bounds{ false };
	cout << "Enter an int outside the bounds: " << lower << " and " << upper << ": " <<endl;
	cin >> num;
	outside_bounds = (num < lower or num > upper);
	cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

	bool on_bounds{ false };
	cout << "Enter an int the bounds: " << lower << " and " << upper << ": " << endl;
	cin >> num;
	on_bounds = (num == lower or num == upper);
	cout << num << " is on the bound of " << lower << " and " << upper << ": " << on_bounds << endl;

	//Determinate if you need to wear a coat on temperature and wind speed

	bool wear_coat{ false };
	double temperature{};
	int wind_speed{};
	const int wind_speed_for_coat{ 25 };
	const double temperature_for_coat{ 45 };

	cout << "Enter the current temperature: ";
	cin >> temperature;
	cout << "Enter the current wind speed: ";
	cin >> wind_speed;

	wear_coat = (wind_speed > wind_speed_for_coat and temperature < temperature_for_coat);

	cout << "The temperature is " << temperature << " C" << " and the wind speed is " << wind_speed << "km/h " << " you should wear a coat " << wear_coat;





}

