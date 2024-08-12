
#include <iostream>
#include <string>
using namespace std;

class Triangle {
private:
    int a = {};
    int b = {};
    int c = {};
public:
    Triangle(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
void check_triangle(){
    if (this->a == this->b && this->b == this->c) {
        cout << "This triangle is equilateral "<<endl;
    }
    else if (this->a == this->b || this->a == this->c || this->c == this->b) {
        cout << "This triangle is isosceles " << endl;
    }
    else {
        cout << "This triangle is scalene " << endl;
    }
}
};
int main()
{
    int a, b, c;
    cout << "Enter the lenght of the 3 sides of a triangle: " << endl;
    cin >> a >>b >>c;
    Triangle tri1(a, b, c);
    tri1.check_triangle();
}

