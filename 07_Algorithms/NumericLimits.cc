#include <cmath>
#include <iostream>
#include <limits>
#include <vector>

// max oder min von datentypen

template <typename T>
void print_min_max()
{
    std::cout << "min: " << std::dec << std::numeric_limits<T>::min() << " max: " << std::dec
              << std::numeric_limits<T>::max() << std::endl;
}

bool equal(double x, double y)
{
    return x == y;
}

bool almost_equal(double x, double y)
{
    return std::abs(x - y) <= std::numeric_limits<double>::epsilon();
}

int main()
{
    print_min_max<short>();
    print_min_max<int>();
    print_min_max<float>();
    print_min_max<double>();

    double d1 = 0.2;
    double d2 = 1 / (std::sqrt(5) * std::sqrt(5)); // == 1 / 5

    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;

    std::cout.precision(17); // Genauigkeit setzen

    std::cout << d1 << std::endl;
    std::cout << d2 << std::endl;

    std::cout << "d1 == d2? " << std::boolalpha << equal(d1, d2) << std::endl;

    std::cout << "epsilon = " << std::numeric_limits<double>::epsilon() << std::endl; // epsilon ausgeben
    std::cout << "d1 ~= d2? " << std::boolalpha << almost_equal(d1, d2) << std::endl;

    // wenn man floating auf gleicheit pruefen will, funktioniert das nicht wirklich
    // stattdessen lieber auf ungefaehr gleich pruefen.

    return 0;
}
