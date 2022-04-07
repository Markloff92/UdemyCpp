#include <fstream>
#include <iostream>
#include <string>

// aus einer text datei string einlesen

int main()
{
    std::string str;
    std::string text;

    std::ifstream iffile; // Objekt von ifstream-Klasse (datei-objekt)
    iffile.open("D:/UdemyCpp_Template-main/5_String/Text.txt");

    if (iffile.is_open())
    {
        while (std::getline(iffile, str)) // liest solang zeilen ein bis terminierung
        {
            text += str + '\n';
        }
    }


    iffile.close();

    std::cout << text << std::endl;

    return 0;
}
