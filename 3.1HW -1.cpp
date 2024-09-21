#include <iostream>

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

        month month = static_cast<month>(monthNum);

        switch (month) {
        case month::January:
            std::cout << "Январь" << std::endl;
            break;
        case month::February:
            std::cout << "Февраль" << std::endl;
            break;
        case month::March:
            std::cout << "Март" << std::endl;
            break;
        case month::April:
            std::cout << "Апрель" << std::endl;
            break;
        case month::May:
            std::cout << "Май" << std::endl;
            break;
        case month::June:
            std::cout << "Июнь" << std::endl;
            break;
        case month::July:
            std::cout << "Июль" << std::endl;
            break;
        case month::August:
            std::cout << "Август" << std::endl;
            break;
        case month::September:
            std::cout << "Сентябрь" << std::endl;
            break;
        case month::October:
            std::cout << "Октябрь" << std::endl;
            break;
        case month::November:
            std::cout << "Ноябрь" << std::endl;
            break;
        case month::December:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неверный номер!" << std::endl;
        }
    } while (true);

    return 0;
}