
#include <iostream>
#include<string>

using namespace std;

class Account {
private:
    string name;
    double balance;
public:
    void set_balance(double bal) { balance = bal; }
    double get_balance() { return balance; }

    void set_name(string s);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}
string Account::get_name() {
    return name;
}
 
bool Account::deposit(double amount) {
    balance += amount;
    return true;
}

bool Account::withdraw(double amount) {
    if (balance - amount > 0) {
        balance -= amount;
        return true;
    }
    else {
        return false;
    }
    return true;
}

int main()
{
    Account frank_account;
    frank_account.set_name("Frank");
    frank_account.set_balance(1000);

    frank_account.deposit(2000);
    if (frank_account.withdraw(2500)) {
        cout << "Withdraw OK" << endl;
    }
    else {
        cout<<"Insufficient founds"<<endl;
    }
    if (frank_account.withdraw(2000)) {
        cout << "Withdraw OK" << endl;
    }
    else {
        cout << "Insufficient founds" << endl;
    }
    return 0;
}
