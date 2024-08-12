

#include <iostream>
using namespace std;

class Rectangle
{
private:
	double lenght = 0.0;
	double width = 0.0;


public:
	void set_lenght_width(double lenght_val, double width_val) {
		lenght = lenght_val;
		width = width_val;
	}

	double calcArea() {
		return lenght * width;
	}

	double calcPerimeter() {
		return (lenght + width) * 2;
	}

};



int main()
{
	double lenght;
	double width;
	cout << "Enter the lenght and width of the rectangle: ";
	cin >> lenght >> width ;

	Rectangle rect1;
	rect1.set_lenght_width(lenght, width);
	
	cout<<"The Area of the rectangle is: "<< rect1.calcArea()<< " and the Perimeter is: "<< rect1.calcPerimeter();
}

