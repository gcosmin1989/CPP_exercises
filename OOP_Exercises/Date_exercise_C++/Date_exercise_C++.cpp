
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;

public:

    int get_day() {
        return day;
    }
    int get_month() {
        return month;
    }
    int get_year() {
        return year;
    }
    void set_day(int day_input) {
        while (day_input < 1 || day_input > 31) { 
            cout << "Day is not valid. Please enter a valid day (1-31): ";
            cin >> day_input;
        }
        this->day = day_input;
    }
    void set_month(int month_input) {
        while (month_input < 1 || month_input > 12) {
            cout << "Month is not valid. Please enter a valid month (1-12): ";
            cin >> month_input;
        }
        this->month = month_input;
    }

    void set_year(int year_input) {
        while (year_input < 1900 || year_input > 2024) {
            cout << "Year is not valid. Please enter a valid month (1900-2024): ";
            cin >> year_input;
        }
        this->year = year_input;
    }
};
int main()
{
    int year;
    int month;
    int day;

    Date date1;
    cout << "Enter your birth year (1900-2024): ";
    cin >> year;
    date1.set_year(year);
    cout << "Enter your birth month (1-12): ";
    cin >> month;
    date1.set_month(month);
    cout << "Enter your birth day (1-31): ";
    cin >> day;
    date1.set_day(day);
    cout << "Your birthday is" << date1.get_day() << "-" << date1.get_month() << "-" << date1.get_year() << endl;

}

