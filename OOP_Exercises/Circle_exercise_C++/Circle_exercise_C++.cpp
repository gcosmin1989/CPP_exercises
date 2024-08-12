#include <iostream>
#include <cmath>
using namespace std;


class Circle
{
private:
    float radius = 0.0;
    const float PI = 3.14159;
public:
    void set_radius(float radius_val) {
       radius = radius_val;
    }
    float calcArea() {
        return PI * pow(radius,2);
    }
    float calcCirc() {
        return PI * radius * 2;
    }
};



int main()
{
    float rad;
    Circle circ1;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    circ1.set_radius(rad);
    cout << "The Area of the circle is: " << circ1.calcArea() << endl;
    cout << "The circumference of the circle is: " << circ1.calcCirc() << endl;

}

