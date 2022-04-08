#include <array>
#include <iostream>
#include <vector>

// Iteratoren beim Vector, Array sind gleich
// Unterschied Vector kann man Insertion und Depletion beim Array geht das nicht !

int main()
{
    const int l = 10;

    std::vector<int> my_vector(10, 0); // auch leer anlegbar, klammer leer lassen.
    std::array<int, l> my_array;       // Arrayklasse, aufjedenfall groesse mit angeben 'l' ,kein push/popback moeglich

    for (std::size_t i = 0; i < 10; i++) // zugriff ist der selbe wie beim vector
    {
        my_array[i] = i;
        my_vector[i] = i;
    }

    for (std::size_t i = 0; i < my_array.size(); i++)
    {
        std::cout << my_array[i] << std::endl;
    }

    my_vector.push_back(10);
    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }

    return 0;
}
