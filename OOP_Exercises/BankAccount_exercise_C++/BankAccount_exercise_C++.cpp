
#include <iostream>
using namespace std;


class BankAccount {
private:
	int acc_no = {};
	double balance = 0;


public:
	BankAccount(int acc_no_val, double balance_val) {
		acc_no = acc_no_val;
		balance = balance_val;
	}

	void deposit(double balance_val) {
		balance += balance_val;
	}
	void withdraw(double balance_val) {
		if (balance < balance_val) {
			cout << "Not enought money to witdraw" << endl;
		}
		else {
			balance -= balance_val;
		}
	}
	double get_balance() {
		return balance;
	}
	int get_account() {
		return acc_no;
	}
	};

int main()
{
	BankAccount ba1(1, 2000);
	cout << "You Created an account with the number: " << ba1.get_account() << endl;
	cout << "Your account has: " << ba1.get_balance() << " $" << endl;
	ba1.deposit(500);
	cout << "Your current ballance after deposit is: " << ba1.get_balance() << endl;
	ba1.withdraw(3000);
	ba1.withdraw(1500);
	cout << "Your current ballance after withdraw is: " << ba1.get_balance() << endl;
}
