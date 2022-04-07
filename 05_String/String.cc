#include <iostream>
#include <string>

int main()
{
    std::string s = "Hallo das ist ein Text";

    std::size_t index = s.find("Jan"); // sucht ein charakter oder ganzes wort im string

    if (index != std::string::npos) // npos ist hier maximale zahl von size_t
    {                               // falls find() den teilstring nicht findet gibt er max zahl von size_t zurecuk
        std::cout << "Substring found at index " << index << std::endl;
    }
    else
    {
        std::cout << "Substring not found!" << std::endl;
    }


    return 0;
}
