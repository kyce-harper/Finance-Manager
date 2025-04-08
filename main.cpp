#include "Account.h"
#include <iostream>
using namespace std;

// int main() {
//     while (true) {
//         cout << "Enter the name of the account holder: ";
//         string name;
//         cin >> name;
//         cout << "Enter the account number: ";
//         int acctNumber;
//         cin >> acctNumber;
//         Account acct(name, acctNumber);
//         cout << "Enter the purpose of the account: ";
//         string purpose;
//         cin >> purpose;
//         acct.setPurpose(purpose);
//         cout << "Enter the amount to deposit: ";
//         double amount;
//         cin >> amount;
//         acct.deposit(amount);
//         cout << "Enter the amount to withdraw: ";
//         cin >> amount;
//         acct.withdraw(amount);
//         cout << "The balance in the account is: " << acct.getBalance() << endl;
//         cout << "The account number is: " << acct.getId() << endl;
//         cout << "The account holder is: " << acct.getName() << endl;
//         cout << "The purpose of the account is: " << acct.getPurpose() << endl;
//         cout << "Do you want to continue? (y/n): ";
//         char response;
//         cin >> response;
//         if (response == 'n') {
//             break;
//         }
//     }
// }

//testing income and expense vectors (initial get and set balance)
// int main(){
//     Account kycesAccount1("KyceAccount1",1);
//     Income kycesJobCheck(1000, "KycesJobCheck","3-26-2025");
//     Expense kycesCarInsurance(250, "KycesCarInsurance","3-28-2025");
//     kycesAccount1.addIncome(kycesJobCheck);
//     kycesAccount1.addExpense(kycesCarInsurance);
//     cout << "The balance in the account is: " << kycesAccount1.getBalance() << endl;
//     return 0;
// }

int main(){
    cout << "Add Account name" << endl;
        string name;
        cin >> name;
        cout << "Add Account number" << endl;
        int acctNumber;
        cin >> acctNumber;
        Account acct(name, acctNumber);
    while(true){
        cout << "Select an option:" << endl;
        cout << "1. Add Income" << endl;
        cout << "2. Add Expense" << endl;
        cout << "3. Get Balance" << endl;
        cout << "4. Get Account ID" << endl;
        cout << "5. Get Account Name" << endl;
        cout << "6. Get Account Purpose" << endl;
        cout << "7. Set Account Purpose" << endl;
        cout << "8. Exit" << endl;
        int option;
        cin >> option;
        switch(option){
            case 1: {
                cout << "Enter income amount: ";
                double amount;
                cin >> amount;
                cout << "Enter income reason: ";
                string reason;
                cin >> reason;
                cout << "Enter income date: ";
                string date;
                cin >> date;
                Income newIncome(amount, reason, date);
                acct.addIncome(newIncome);
                break;
            }
            case 2: {
                cout << "Enter expense amount: ";
                double amount;
                cin >> amount;
                cout << "Enter expense reason: ";
                string reason;
                cin >> reason;
                cout << "Enter expense date: ";
                string date;
                cin >> date;
                Expense newExpense(amount, reason, date);
                acct.addExpense(newExpense);
                break;
            }
            case 3:
                cout << "The balance in the account is: " << acct.getBalance() << endl;
                break;
            case 4:
                cout << "The account number is: " << acct.getId() << endl;
                break;
            case 5:
                cout << "The account holder is: " << acct.getName() << endl;
                break;
            case 6:
                cout << "The purpose of the account is: " << acct.getPurpose() << endl;
                break;
            case 7: {
                cout << "Enter new purpose: ";
                string newPurpose;
                cin >> newPurpose;
                acct.setPurpose(newPurpose);
                break;
            }
            case 8:
                return 0;
                 // Exit the program
        }


    }
}