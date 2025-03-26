#include <string>
#include <iostream>
#include "Expense.h"

using namespace std;

Expense::Expense(double amount, string reason, string date) {
    this->amount = amount;
    this->reason = reason;
    this->date = date;
}
double Expense::getAmount(){
    return amount;
}
string Expense::getReason(){
    return reason;
}
string Expense::getDate(){
    return date;
}