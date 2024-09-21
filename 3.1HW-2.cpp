#include <iostream>
#include <string>

struct bankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

void changeBalance(bankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    bankAccount account;

    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore();
    std::getline(std::cin, account.ownerName);

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    std::cout << "Введите новый баланс: ";
    double newBalance;
    std::cin >> newBalance;

    changeBalance(account, newBalance);

    std::cout << "Ваш счёт: " << account.ownerName << ", "
        << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}