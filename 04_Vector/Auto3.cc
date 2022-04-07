#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int matrix[2][3]{}; // alternativ int matrix[2][3] = {};


    for (const auto &row : matrix) //vereinfachter weg um 2d array auszugeben, da ja ges. array ausgegeben wird
    {
        for (const auto &value : row)
        {
            std::cout << value << std::endl;
        }
    }

    // c++17 feature
    struct Data
    {
        int x;
        int y;
    };

    std::vector<Data> vec{{1, 2}, {4, 5}, {8, 9}};
    std::vector<Data> arc{{0, 0}, {7, 7}, {8, 9}};

    for (const auto &data : vec)
    {
        std::cout << data.x << data.y << std::endl;
    }

    // Structured Bindings (verschoenern des Codes)
    for (const auto &[x1, y1] : arc) // es wird lokal eine referenz variable erstellt die sich auf x, y beziehen
    {
        std::cout << x1 << y1 << std::endl;
    }

    return 0;
}
