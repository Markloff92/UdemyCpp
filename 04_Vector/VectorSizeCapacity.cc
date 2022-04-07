#include <iostream>
#include <vector>

// Einmal bisschen mehr Capacity als Size, da Heap Allocation langsam ist.
// d.h. Capacity mehr anlegen als Size damit push_back mit einkalkuliert

int main()
{
    std::vector<int> my_vector;

    for (std::size_t i = 0; i < 10; i++)
    {
        my_vector.push_back(i);
    }

    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;

    return 0;
}
