#include <iostream>
#include <vector>
#include <string>
#include "Month.cpp"
#include "Account.cpp"

using namespace std;

int main(){
    Account account(1000, "Checking", "Personal");
    Month month("January");
    Income income(1000, "Job", "1/1/2020", account, "Checking");
    Expense expense("Rent", 500, "1/1/2020", true, account, "Checking");
    month.addIncome(income);
    month.addExpense(expense);
    month.printMonth();
    account.display();
    return 0;
}