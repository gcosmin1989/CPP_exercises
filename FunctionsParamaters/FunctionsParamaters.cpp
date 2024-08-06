#include <iostream>
#include <functional>
#include <vector>

using namespace std;
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string>v);

void pass_by_value1(int num) {
    num = 1000;
}

void pass_by_value2(string s) {
    s = "Changed";
}

void pass_by_value3(vector<string> v) {
    v.clear();
}

void print_vector(vector<string>v) {
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}



int main()
{
    int num{ 10 };
    int another_num{ 20 };

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1 " << num << endl;

    cout << "another_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num before calling pass_by_value1 " << another_num << endl;

    string name{ "Cosmin" };
    cout << "name before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name before calling pass_by_value2 " << name << endl;

    vector<string>names{ "name1","name2", "name3" };
    cout << "names before calling pass_by_value3: "  << endl;
    print_vector(names);
    pass_by_value3(names);
    cout << "names after calling pass_by_value3 "<< endl;
    print_vector(names);

    
}
