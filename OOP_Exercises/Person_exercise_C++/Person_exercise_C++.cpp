

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name ;
    int age = {};
    string country;

public:
    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
    string get_country() {
        return country;
    }
    void set_name(const string& name) {
        this->name = name;
    }
    void set_age(int age) {
        this->age = age;
    }
    void set_country(const string& country) {
        this->country = country;
    }

};

int main()
{
    Person pers1;
    pers1.set_name("Cosmin");
    pers1.set_age(34);
    pers1.set_country("Valcea");
    cout << pers1.get_name() << endl;
    cout << pers1.get_age() << endl;
    cout << pers1.get_country() << endl;
}

