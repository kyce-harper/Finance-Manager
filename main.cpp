#include "Account.h"
#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "Enter the name of the account holder: ";
        string name;
        cin >> name;
        cout << "Enter the account number: ";
        int acctNumber;
        cin >> acctNumber;
        Account acct(name, acctNumber);
        cout << "Enter the purpose of the account: ";
        string purpose;
        cin >> purpose;
        acct.setPurpose(purpose);
        cout << "Enter the amount to deposit: ";
        double amount;
        cin >> amount;
        acct.deposit(amount);
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        acct.withdraw(amount);
        cout << "The balance in the account is: " << acct.getBalance() << endl;
        cout << "The account number is: " << acct.getId() << endl;
        cout << "The account holder is: " << acct.getName() << endl;
        cout << "The purpose of the account is: " << acct.getPurpose() << endl;
        cout << "Do you want to continue? (y/n): ";
        char response;
        cin >> response;
        if (response == 'n') {
            break;
        }
    }

}