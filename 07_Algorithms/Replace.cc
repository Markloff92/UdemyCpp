#include <algorithm>
#include <iostream>
#include <numeric>
#include <random>
#include <vector>

// wir suchen nach einen bestimmten wert und wollen den mit einem neuen ersetzen

void print_vector(const std::vector<int> &my_vector)
{
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec[" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}

bool replace_even(const int i)
{
    return (i % 2 == 0); // zahl gerade return true, ungerade -> false
}

int main()
{
    std::vector<int> my_vector1(10, 0);
    std::vector<int> my_vector2(10, 0);
    std::vector<int> my_vector3(10, 0);

    std::iota(my_vector1.begin(), my_vector1.end(), 1); // auffuellen
    print_vector(my_vector1);

    std::replace(my_vector1.begin(), my_vector1.end(), 2, 1337); // nach wert '2' suchen und mit '1337' ersetzen.
    print_vector(my_vector1);

    std::replace_if(my_vector1.begin(),
                    my_vector1.end(),
                    replace_even, // funktionsobjekt
                    -1);          // replace_if funktionsobjekt uebergeben das true oder false uebergibt
    print_vector(my_vector1);

    return 0;
}
