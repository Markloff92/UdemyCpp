#include <iomanip>
#include <iostream>

// Ein Datentyp in ein anderen Datentyp umwandeln (Casting)
// 1a. C++: static_cast<newDtype>(varName) - converts object from one type to another
// 1b. C: (newDtype) (varName)
// Easier to read, less prone to errors

int main()
{
    double number = 3.14;
    std::cout << std::setprecision(20) << number << std::endl;

    int number2 = number;
    std::cout << std::setprecision(20) << number2 << std::endl;

    // C-Casting
    // (newDtype)(varName)

    float number3 = (float)(number); //cast von double zu float, genauigkeit wird schlechter
    std::cout << std::setprecision(20) << number3 << std::endl;

    double number4 = (double)(number3);
    std::cout << std::setprecision(20) << number4 << std::endl;

    //c++-Casting
    //static_cast<newDtype>(varName)
    float number5 = static_cast<float>(number);
    std::cout << std::setprecision(20) << number5 << std::endl;

    double number6 = static_cast<double>(number3);
    std::cout << std::setprecision(20) << number6 << std::endl;

    //int casting kann zahlen abschneiden.

    int number7 = 133700;
    std::cout << number7 << std::endl;
    char number8 = static_cast<char>(number7);
    std::cout << static_cast<int>(number8) << std::endl;

    return 0;
}
