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

#include "menuManager.h"
#include <iostream>

int main() {
    std::cout << "Welcome to Finance Manager\n";
    std::cout << "Enter account name: ";
    string name;
    getline(std::cin, name);
    
    std::cout << "Enter account number: ";
    int accountNumber;
    std::cin >> accountNumber;
    
    Account account(name, accountNumber);
    MenuManager menu(account);
    
    while (true) {
        menu.displayMenu();
        int option;
        if (std::cin >> option && menu.isValidOption(option)) {
            menu.processOption(option);
        } else {
            std::cout << "Invalid option. Please try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
    
    return 0;
}