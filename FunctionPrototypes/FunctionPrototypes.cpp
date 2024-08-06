
#include <iostream>
#include <random>
#include <functional>

using namespace std;
double calc_area_circle(double );
double calc_volume_cylinder(double , double);
void area_circle();
void volume_cylinder();

const double pi{ 3.14159 };



int main()
{

	area_circle();
	volume_cylinder();

	return 0;

}
double calc_area_circle(double radius) {
	return pi * radius * radius;

}

double calc_volume_cylinder(double radius, double height) {
	return calc_area_circle(radius) * height;
}



void area_circle() {
	double radius{};
	cout << "Enter the radius of the circle: " << endl;
	cin >> radius;

	cout << "The area of the circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
	double radius{};
	double height{};
	cout << "Enter the radius of the circle: " << endl;
	cin >> radius;
	cout << "Enter the height of the circle: " << endl;
	cin >> height;
	cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;

}