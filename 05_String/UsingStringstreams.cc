#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::string birthday;


    std::cout << "Please enter your Birthday (DD.MM.YYYY): ";
    std::cin >> birthday;

    std::stringstream birthday_ss(birthday);
    unsigned int day, month, year;
    char c; // wegwerf variable .

    birthday_ss >> day >> c >> month >> c >> year; // day dann was mit '.' getrennt ist usw.

    std::cout << "Your Birthday is: " << day << "." << month << "." << year << std::endl;

    return 0;
}
