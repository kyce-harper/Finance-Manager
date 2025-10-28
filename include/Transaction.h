#include <string>
#include <ctime>

enum class TransactionType { Income, Expense};

struct Transaction {
    TransactionType type;
    double amount;
    std::string description;
    std::time_t date;

    Transaction(TransactionType t, double amt, const std::string& desc) {
        type = t;
        amount = amt;
        description = desc;
        date = std::time(nullptr); // Set to current time
    }
    Transaction() : type(TransactionType::Income), amount(0.0), date(0) {}
};