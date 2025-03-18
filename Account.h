#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>
using namespace std;

class Account{
    private:
        double balance;
        string name;
        string purpose;
    public:
        Account(double balance, string name, string purpose){
            this->balance = balance;
            this->name = name;
            this->purpose = purpose;
        }
        double getBalance(){
            return balance;
        }
        string getName(){
            return name;
        }
        string getPurpose(){
            return purpose;
        }
        void setBalance(double balance){
            this->balance = balance;
        }
        void setName(string name){
            this->name = name;
        }
        void setPurpose(string purpose){
            this->purpose = purpose;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Balance: " << balance << endl;
            cout << "Purpose: " << purpose << endl;
        }
};

#endif // ACCOUNT_H