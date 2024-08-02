#include <iostream>
using namespace std;


int main()
{
    int num1{ 200 };
    int num2{ 100 };


    int result{ 0 };
    result = num1 + num2;

    cout << num1 << " + " << num2 << " = " << result<< endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    result = num1 / num2;
    cout << num1 << " / " << num2 << " = " << result << endl;

    result = num2 / num1;
    cout << num2 << " / " << num1 << " = " << result << endl;

    result = num1 % num2;
    cout << num2 << " % " << num1 << " = " << result << endl;

    num1 = 10;
    num2 = 3;
    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;



    //Exercise

    const double ron_per_eur{ 4.98 };
    cout << "Welcome to the EUR to RON converter" << endl;
    cout << "Enter the value in EUR: ";
    double value_eur{};
    double value_ron{};
   
    cin >> value_eur;
    value_ron = value_eur * ron_per_eur;
    cout << "The value in RON for " << value_eur << " EUR, is: " << value_ron << " RON";

    return 0;
}

