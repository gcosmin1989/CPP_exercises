#include <functional>
#include <iostream>
using namespace std;


double calc_cost(double base_cost, double tax_rate = 0.10);

double calc_cost(double base_cost, double tax_rate) {
    return base_cost += (base_cost)*tax_rate;
}

int main()
{
    double cost{ 0 };
    cost = calc_cost(200);
    cout << "Cost with default value: " << cost << endl;
    cost = calc_cost(200, 0.01);
    cout << "Cost without default value: " << cost << endl;

}


