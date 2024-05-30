#include <iostream>
#include <string>
#include <fstream>

class Address{
private:
    std::string city;
    std::string street;
    int buildingsNumber;
    int flatsNumber;

public:
    Address(std::string city, std::string street, int buildingsNumber = 0, int flatsNumber = 0) {
        this -> city = city;
        this -> street = street;
        this -> buildingsNumber = buildingsNumber;
        this -> flatsNumber = flatsNumber;
    }
    std::string outputForFile (){
        return city + ", " + street + ", " + std::to_string(buildingsNumber) + ", " + std::to_string(flatsNumber);
    }
};


int main() {
    int amountOfAddresses;

    std::string city;
    std::string street;
    int buildingsNumber = 0;
    int flatsNumber = 0;

    std::ifstream readFromFile ("in.txt");
    std::ofstream writeToFile ("out.txt");

    if(!readFromFile.is_open())
    {
        std::cout << "ERROR. FILE IS NOT OPENED";
    }
    readFromFile >> amountOfAddresses;
    writeToFile << amountOfAddresses << std::endl;

    for (int i = 0; i < amountOfAddresses; i++) {

        readFromFile >> city;
        readFromFile >> street;
        readFromFile >> buildingsNumber;
        readFromFile >> flatsNumber;
        Address address(city, street, buildingsNumber, flatsNumber);
        writeToFile << address.outputForFile() << std::endl;
    }

    readFromFile.close();
    writeToFile.close();

}
