
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int employee_id = {};
	double salary;
public:
	double max_rating = 1.9;
	double min_rating = 1.5;

public:
	Employee(string name_val, int id, double salary_val) {
		name = name_val;
		employee_id = id;
		salary = salary_val;
	}
	void performace_rating(double perf_rating) {
		if (perf_rating > min_rating && perf_rating < max_rating) {
			salary *= perf_rating;
		}
		else {
			cout << "The rating is out of bound" << endl;
		}
	}
	double get_salary() {
		return salary;
	}
	string get_name() {
		return name;
	}
};



int main()
{
	double rating = {};
	Employee emp1("Cosmin", 1, 3000);
	cout << "The current salary for " << emp1.get_name() << " is $" << emp1.get_salary() << endl;
	cout << "Enter the rating between " << emp1.min_rating << " and " << emp1.max_rating << endl;
	cin >> rating;
	emp1.performace_rating(rating);
	cout << "The salary after the rating is: $ " << emp1.get_salary() << endl;

	return 0;
}
