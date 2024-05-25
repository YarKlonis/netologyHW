#include <iostream>
#include <string>

struct bankAccount
{
    int accountNumber = 0;
    std::string name;
    double accountBalance = 0.0;
};

void changeAccountBalance(bankAccount(& p))
{
    std::cout<< "Input actually account balance: ";
    std::cin >> p.accountBalance;
}

int main() {

    int userAccountNumber;
    std::string userName;
    double userAccountBalance;

    bankAccount person;

    std::cout << "Input account number: ";
    std::cin >>person.accountNumber;

    std::cout << "Input name of account holder: ";
    std::cin >> person.name;

    std::cout << "Input account balance:";
    std::cin >> person.accountBalance;

    changeAccountBalance(person);

    std::cout << "Bank account " << person.name << ", "<< person.accountNumber << ", " << person.accountBalance;

}