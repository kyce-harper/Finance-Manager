#include "Account.h"
#include <string>
using namespace std;
Account::Account(string name, int acctNumber) {
    this->name = name;
    this->id = acctNumber;
    this->balance = 0;
    this->purpose = "General";
    this->incomes = vector<Income>();
    this->expenses = vector<Expense>();
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
void Account:: addIncome(Income newIncome) {
    incomes.push_back(newIncome);
    this->setBalance();
}
void Account:: addExpense(Expense newExpense) {
    expenses.push_back(newExpense);
    this->setBalance();
}
void Account::setBalance() {
    this->balance = 0;
    for(Income income: incomes){
        balance += income.getAmount();
    }
    for(Expense expense: expenses){
        balance -= expense.getAmount();
    }
}
double Account::getBalance() {
    return balance;
}