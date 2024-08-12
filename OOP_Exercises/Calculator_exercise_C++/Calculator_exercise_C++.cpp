#include <iostream>
using namespace std;

template <typename num>
class Calculator
{
public:
    num a;
    num b;


    Calculator(num a_val, num b_val) {
        a = a_val;
        b = b_val;
    }

    num add() {
        return a + b;
    }

    num substract() {
        return a - b;
    }

    num multiply() {
        return a * b;
    }

    num divide() {
        if (b == 0) { 
            cout << "Error: Division by 0 !!" << endl;
            return 0;  
        }
        else {
            return a / b;
        }
    }
};

int main()
{
    int a, b;
    cout << "Enter 2 numbers separated by space: ";
    cin >> a >> b;

    Calculator<int> calc1(a, b); 

    cout << "Addition: " << calc1.add() << endl;
    cout << "Subtraction: " << calc1.substract() << endl;
    cout << "Multiplication: " << calc1.multiply() << endl;
    cout << "Division: " << calc1.divide() << endl;

    float fa, fb;
    cout << "Enter 2 floats numbers separated by space: ";
    cin >> fa >> fb;

    Calculator<float>calc2(fa, fb);

    cout << "Addition: " << calc2.add() << endl;
    cout << "Subtraction: " << calc2.substract() << endl;
    cout << "Multiplication: " << calc2.multiply() << endl;
    cout << "Division: " << calc2.divide() << endl;

    return 0;
}
