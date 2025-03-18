#pragma once
#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>
#include <iostream>
#include "Account.h"
using namespace std;

class Expense{
    private:
        string name;
        double amount;
        string date;
        bool need;
        string accountName;
    public:
        Expense(string name, double amount, string date, bool need, Account& account, string accountName){
            this->name = name;
            this->amount = amount;
            account.setBalance(account.getBalance() - amount);
            this->date = date;
            this->need = need;
            this ->accountName = accountName;
        }
        string getName(){
            return name;
        }
        double getAmount(){
            return amount;
        }
        string getDate(){
            return date;
        }
        bool isNeed(){
            return need;
        }
        string getAccount(){
            return accountName;
        }
        void display(){
            cout << "Account: " << accountName << endl;
            cout << "Name: " << name << endl;
            cout << "Amount: " << amount << endl;
            cout << "Date: " << date << endl;
            cout << "Need: " << (need ? "Yes" : "No") << endl;
            
        }
};

#endif // EXPENSE_H