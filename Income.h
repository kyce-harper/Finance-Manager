#pragma once
#ifndef INCOME_H
#define INCOME_H

#include <string>
using namespace std;

class Income {
    private: 
        double amount;
        string reason, date;
    public:
        Income(double, string, string);
        
        double getAmount();
        string getReason();
        string getDate();

};

#endif