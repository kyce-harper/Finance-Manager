#pragma once
#include "Account.h"
#include <map>
#include <functional>

class MenuManager {
    private:
        Account& account;
        std::map<int, std::pair<std::string, std::function<void()>>> menuOptions;
        
        // Input helpers
        double getDoubleInput(const std::string& prompt);
        string getLineInput(const std::string& prompt);
        string getDateInput(const std::string& prompt);
        
        // Menu actions
        void addIncome();
        void addExpense();
        void showBalance();
        void showAccountDetails();
        void setPurpose();

    public:
        MenuManager(Account& acc);
        void displayMenu();
        void processOption(int option);
        bool isValidOption(int option);
};
