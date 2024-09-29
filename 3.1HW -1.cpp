﻿#include <iostream>

enum class month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    int monthNum;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNum;

        if (monthNum == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        Month month = static_cast<month>(monthNum);

        switch (month) {
        case Month::January:
            std::cout << "Январь" << std::endl;
            break;
        case Month::February:
            std::cout << "Февраль" << std::endl;
            break;
        case Month::March:
            std::cout << "Март" << std::endl;
            break;
        case Month::April:
            std::cout << "Апрель" << std::endl;
            break;
        case Month::May:
            std::cout << "Май" << std::endl;
            break;
        case Month::June:
            std::cout << "Июнь" << std::endl;
            break;
        case Month::July:
            std::cout << "Июль" << std::endl;
            break;
        case Month::August:
            std::cout << "Август" << std::endl;
            break;
        case Month::September:
            std::cout << "Сентябрь" << std::endl;
            break;
        case Month::October:
            std::cout << "Октябрь" << std::endl;
            break;
        case Month::November:
            std::cout << "Ноябрь" << std::endl;
            break;
        case Month::December:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неверный номер!" << std::endl;
        }
    } while (true);

    return 0;
}
