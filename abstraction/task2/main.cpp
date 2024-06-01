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

void sort(Address* arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (arr[j] -> outputForFile() > arr[j + 1] -> outputForFile()){
                std::swap(arr[j], arr[j + 1]);

            }
        }
    }
}

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

    Address** arr = new Address*[amountOfAddresses];
    for (int i = 0; i < amountOfAddresses; i++){
        readFromFile >> city >> street >> buildingsNumber >> flatsNumber;
        arr[i] = new Address(city, street, buildingsNumber, flatsNumber);

    }
    sort(arr, amountOfAddresses);
    for (int i = 0; i < amountOfAddresses; i++){
        writeToFile << arr[i] -> outputForFile() << std::endl;

    }

    for (int i = 0; i < amountOfAddresses; i++){
        delete arr[i];
    }
    delete[] arr;

    readFromFile.close();
    writeToFile.close();

    return 0;
}
