#pragma once
#ifndef __MONTH_H_
#define __MONTH_H

#include <string>
#include <vector>
#include <iostream>
#include "Income.h"
#include "Expense.h"

using namespace std;

class Month{
    private:
        string name;
        vector<Income> incomes;
        vector<Expense> expenses;
    public:
        Month(string name){
            this->name = name;
            incomes = vector<Income>();
            expenses = vector<Expense>();
        }
        void addIncome(Income income){
            incomes.push_back(income);
        }
        void addExpense(Expense expense){
            expenses.push_back(expense);
        }
        void printIncomes(){
            for (int i = 0; i < incomes.size(); i++){
                cout << incomes[i].getSource() << " " << incomes[i].getAmount() << endl;
            }
        }
        void printExpenses(){
            for (int i = 0; i < expenses.size(); i++){
                cout << expenses[i].getName() << " " << expenses[i].getAmount() << endl;
            }
        }
        void printMonth(){
            cout << name << endl;
            printIncomes();
            printExpenses();
        }
};

#endif // __MONTH_H_