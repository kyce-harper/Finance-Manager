#include <string>
#include <iostream>
#include "Income.h"
using namespace std;

Income::Income(double amount, string date, string reason){
    this->amount = amount;
    this->date = date;
    this->reason = reason;
}
double Income::getAmount(){
    return amount;
}
string Income::getReason(){
    return reason;
}
string Income::getDate(){
    return date;
}