#pragma once // This is a preprocessor directive that tells the compiler to include the header file only once in the compilation of a source file.
#ifndef ACCOUNT_H // This is a preprocessor directive that checks if the header file has already been included in the compilation of a source file
#define ACCOUNT_H // This is a preprocessor directive that defines the header fil
#include <string>
using namespace std;

class Account {
    private:
        double balance;
        int id;
        string name, purpose;
    public:
        Account(string, int);
        void deposit(double);
        void withdraw(double);
        double getBalance();
        int getId();
        string getName();
        void setPurpose(string);
        string getPurpose();

};

#endif