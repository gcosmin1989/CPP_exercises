
#include <iostream>
#include "Account.h"
using namespace std;

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
        cout << "Insufficient founds" << endl;
    }
    if (frank_account.withdraw(2000)) {
        cout << "Withdraw OK" << endl;
    }
    else {
        cout << "Insufficient founds" << endl;
    }
    return 0;
}

