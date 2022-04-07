#include <iostream>
#include <vector>

int main()
{
    //int *data = new int[5]; //alt
    std::vector<int> my_vector(2, 0); // deklarieren eines containers(vector)

    for (std::size_t i = 0; i < my_vector.size(); i++) //gibt length des vectors wieder
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;

    my_vector[0] = 11;
    my_vector[1] = -42;

    for (std::size_t i = 0; i < my_vector.size(); i++) //std::size_t sollte man verwenden, bei laenge von containern
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;

    my_vector.push_back(55); // +1 index an vector

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;

    my_vector.pop_back(); // -1 inex an vector

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << my_vector[i] << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
