#pragma once
#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>
#include <iostream>
using namespace std;

class Expense {
    private:
        double amount;
        string reason, date;

    public:
        Expense(double, string, string);

        double getAmount();
        string getReason();
        string getDate();
};




#endif