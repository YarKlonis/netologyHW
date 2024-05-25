#include <iostream>
#include <string>

struct address {
    std::string city;
    std::string street;
    int buildingNumber = 0;
    int flatNumber = 0;
    int index = 0;
};

void outputForStruct (address(& struction)){
    std::cout<< "Input city: ";
    std::cin >> struction.city;

    std::cout<< "Input street: ";
    std::cin >> struction.street;

    std::cout<< "Input number of a building: ";
    std::cin >> struction.buildingNumber;

    std::cout<< "Input number of a flat: ";
    std::cin >> struction.flatNumber;

    std::cout<< "Input index: ";
    std::cin >> struction.index;


}

int main() {
    address user1;
    address user2;

    outputForStruct(user1);
    outputForStruct(user2);

}