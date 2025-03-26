#pragma once // This is a preprocessor directive that tells the compiler to include the header file only once in the compilation of a source file.
#ifndef ACCOUNT_H // This is a preprocessor directive that checks if the header file has already been included in the compilation of a source file
#define ACCOUNT_H // This is a preprocessor directive that defines the header fil
#include <string>
#include <vector>
#include "Income.h"
#include "Expense.h"
using namespace std;

class Account {
    private:
        double balance;
        int id;
        string name, purpose;
        vector<Income> incomes;
        vector<Expense> expenses;
    public:
        Account(string, int);
        //double getBalance();
        int getId();
        string getName();
        void setPurpose(string);
        string getPurpose();
        void addIncome(Income);
        void addExpense(Expense);
        void setBalance();
        double getBalance();

};

#endif