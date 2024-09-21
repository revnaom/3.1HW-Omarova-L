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
    std::cout << "�����: " << address.city << std::endl;
    std::cout << "�����: " << address.street << std::endl;
    std::cout << "����� ����: " << address.houseNumber << std::endl;
    std::cout << "����� ��������: " << address.apartmentNumber << std::endl;
    std::cout << "������: " << address.index << std::endl << std::endl;
}

int main() {
    Address address1;
    Address address2;

    std::cout << "������� ������ ��� ������� ������:" << std::endl;
    std::cout << "�����: ";
    std::getline(std::cin, address1.city);
    std::cout << "�����: ";
    std::getline(std::cin, address1.street);
    std::cout << "����� ����: ";
    std::cin >> address1.houseNumber;
    std::cout << "����� ��������: ";
    std::cin >> address1.apartmentNumber;
    std::cout << "������: ";
    std::cin >> address1.index;
    std::cin.ignore();

    std::cout << "������� ������ ��� ������� ������:" << std::endl;
    std::cout << "�����: ";
    std::getline(std::cin, address2.city);
    std::cout << "�����: ";
    std::getline(std::cin, address2.street);
    std::cout << "����� ����: ";
    std::cin >> address2.houseNumber;
    std::cout << "����� ��������: ";
    std::cin >> address2.apartmentNumber;
    std::cout << "������: ";
    std::cin >> address2.index;
    std::cin.ignore();

    printAddress(address1);
    printAddress(address2);

    return 0;
}
