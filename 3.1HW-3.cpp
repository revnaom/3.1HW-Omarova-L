#include <iostream>
#include <string>

struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

void printAddress(const Address& address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
    std::cout << "Индекс: " << address.index << std::endl << std::endl;
}

int main() {
    Address address1;
    Address address2;

    std::cout << "Введите данные для первого адреса:" << std::endl;
    std::cout << "Город: ";
    std::getline(std::cin, address1.city);
    std::cout << "Улица: ";
    std::getline(std::cin, address1.street);
    std::cout << "Номер дома: ";
    std::cin >> address1.houseNumber;
    std::cout << "Номер квартиры: ";
    std::cin >> address1.apartmentNumber;
    std::cout << "Индекс: ";
    std::cin >> address1.index;
    std::cin.ignore();

    std::cout << "Введите данные для второго адреса:" << std::endl;
    std::cout << "Город: ";
    std::getline(std::cin, address2.city);
    std::cout << "Улица: ";
    std::getline(std::cin, address2.street);
    std::cout << "Номер дома: ";
    std::cin >> address2.houseNumber;
    std::cout << "Номер квартиры: ";
    std::cin >> address2.apartmentNumber;
    std::cout << "Индекс: ";
    std::cin >> address2.index;
    std::cin.ignore();

    printAddress(address1);
    printAddress(address2);

    return 0;
}
