#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

//Sortier funktion std::sort()

void print_vector(const std::vector<int> &my_vector)
{

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec [" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}

void print_vector_info(const std::vector<int> &my_vector)
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << std::endl << std::endl;
}

bool sort_ascending(const int i, const int j) //aufsteigend function
{
    return i < j;
}

bool sort_descending(const int i, const int j) //absteigend function
{
    return i > j;
}

int main()
{
    std::vector<int> my_vector(10, 0);                // vector deklarieren
    std::iota(my_vector.begin(), my_vector.end(), 0); // aufsteigend auffuellend start '0'
    print_vector(my_vector);

    std::sort(my_vector.begin(), my_vector.end(), sort_descending); //sortieren mit 3. parameter sort function
    print_vector(my_vector);

    std::sort(my_vector.begin() + 2, my_vector.end() - 1, sort_ascending); // veraenderbar durch + -..
    print_vector(my_vector);

    return 0;
}
