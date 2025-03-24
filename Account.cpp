#include "Account.h"
#include <string>
using namespace std;
Account::Account(string name, int acctNumber) {
    this->name = name;
    this->id = acctNumber;
    this->balance = 0;
    this->purpose = "General";
}
void Account::deposit(double amount) {
    balance += amount;
}
void Account::withdraw(double amount) {
    balance -= amount;
}
double Account::getBalance() {
    return balance;
}
int Account::getId() {
    return id;
}
string Account::getName() {
    return name;
}
void Account::setPurpose(string newPurpose) {
    purpose = newPurpose;
}
string Account::getPurpose() {
    return purpose;
}