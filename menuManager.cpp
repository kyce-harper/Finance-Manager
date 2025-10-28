#include "menuManager.h"
#include <iostream>
#include <limits>

MenuManager::MenuManager(Account& acc) : account(acc) {
    menuOptions = {
        {1, {"Add Income", [this]() { addIncome(); }}},
        {2, {"Add Expense", [this]() { addExpense(); }}},
        {3, {"View Balance", [this]() { showBalance(); }}},
        {4, {"Account Details", [this]() { showAccountDetails(); }}},
        {5, {"Set Purpose", [this]() { setPurpose(); }}},
        {6, {"Exit", []() { exit(0); }}}
    };
}

void MenuManager::displayMenu() {
    std::cout << "\n=== Finance Manager ===\n";
    for (const auto& [key, value] : menuOptions) {
        std::cout << key << ". " << value.first << "\n";
    }
    std::cout << "Choose an option: ";
}

double MenuManager::getDoubleInput(const std::string& prompt) {
    while (true) {
        std::cout << prompt;
        double value;
        if (std::cin >> value && value >= 0) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return value;
        }
        std::cout << "Invalid input. Please enter a positive number.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

string MenuManager::getLineInput(const std::string& prompt) {
    std::cout << prompt;
    string input;
    std::getline(std::cin, input);
    return input;
}

void MenuManager::addIncome() {
    double amount = getDoubleInput("Enter income amount: ");
    string reason = getLineInput("Enter income reason: ");
    string date = getLineInput("Enter date (MM-DD-YYYY): ");
    
    Income income(amount, reason, date);
    account.addIncome(income);
    std::cout << "Income added successfully!\n";
}

void MenuManager::addExpense() {
    double amount = getDoubleInput("Enter expense amount: ");
    string reason = getLineInput("Enter expense reason: ");
    string date = getLineInput("Enter date (MM-DD-YYYY): ");
    
    Expense expense(amount, reason, date);
    account.addExpense(expense);
    std::cout << "Expense added successfully!\n";
}

void MenuManager::showBalance() {
    std::cout << "Current balance: $" << account.getBalance() << "\n";
}

void MenuManager::showAccountDetails() {
    std::cout << "\n=== Account Details ===\n";
    std::cout << "Name: " << account.getName() << "\n";
    std::cout << "ID: " << account.getId() << "\n";
    std::cout << "Purpose: " << account.getPurpose() << "\n";
    std::cout << "Balance: $" << account.getBalance() << "\n";
}

void MenuManager::setPurpose() {
    string purpose = getLineInput("Enter new purpose: ");
    account.setPurpose(purpose);
    std::cout << "Purpose updated successfully!\n";
}

void MenuManager::processOption(int option) {
    if (auto it = menuOptions.find(option); it != menuOptions.end()) {
        it->second.second();
    }
}

bool MenuManager::isValidOption(int option) {
    return menuOptions.find(option) != menuOptions.end();
}
