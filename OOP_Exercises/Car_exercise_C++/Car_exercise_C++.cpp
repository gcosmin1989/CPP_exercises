
#include <iostream>
#include <string>
using namespace std;


class Car{
private:
    string company;
    string model;
    int year = {};


    
public:
    Car(string company_val, string model_val, int year_val) {
        company = company_val;
        model = model_val;
        year = year_val;
    }
    string get_company() {
        return company;
    }
    string get_model() {
        return model;
    }
    int get_year() {
        return year;
    }

    void set_company(string company_val) {
        company = company_val;
    }
    void set_model(string model_val) {
        model = model_val;
    }
    void set_year(int year_val) {
        year = year_val;
    }
};

int main()
{
    Car car1("BMW", "E39", 2008);
    cout << "Constructor values: " << endl << "Company: " << car1.get_company() << endl;
    cout << "Model: " << car1.get_model() << endl;
    cout  << "Year: " << car1.get_year() << endl<<endl;

    car1.set_company("Volvo");
    car1.set_model("S60");
    car1.set_year(2019);

    cout << "Set values: " << endl << "Company: " << car1.get_company() << endl;
    cout << "Model: " << car1.get_model() << endl;
    cout << "Year: " << car1.get_year() << endl;
}
