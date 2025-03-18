#pragma once
#ifndef INCOME_H
#define INCOME_H

#include <string>
#include <iostream>
#include "Account.h"
using namespace std;
class Income {
    private:
        double amount;
        string source;
        string date;
        string accountName;
    public:
        Income(double amount, string source, string date, Account & account, string accountName) {
            this->amount = amount;
            account.setBalance(account.getBalance() + amount);
            this->source = source;
            this->date = date;
            this->accountName = accountName;
        }
        double getAmount() {
            return amount;
        }
        string getSource() {
            return source;
        }
        string getDate() {
            return date;
        }
        string getAccountName() {
            return accountName;
        }
        void display() {
            cout << "Account: " << accountName << endl;
            cout << "Amount: " << amount << endl;
            cout << "Source: " << source << endl;
            cout << "Date: " << date << endl;
        }
};

#endif // INCOME_H