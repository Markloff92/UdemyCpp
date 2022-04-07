#include <iostream>


int main()
{
    float vector1[3]{};
    float vector2[3]{};

    std::cout << "Enter Values for vector 1: " << std::endl;

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector1[i];
    }

    std::cout << "Enter Values for vector 2: " << std::endl;

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cin >> vector2[i];
    }

    for (unsigned int i = 0; i < 3; i++)
    {
        std::cout << "V1[i] + V2[i] = " << vector1[i] + vector2[i] << std::endl;
        }

    return 0;
}
