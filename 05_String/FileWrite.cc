#include <fstream>
#include <iostream>
#include <string>

// aus einer text datei string einlesen

int main()
{
    std::string str;
    std::string text;

    std::ifstream iffile;
    iffile.open("D:/UdemyCpp_Template-main/5_String/Text.txt");

    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n'; // alternativ iffile >> text;  man speichert das in iffile in text
        }
    }


    iffile.close(); //was man oeffnet schließt auch wieder

    std::cout << text << std::endl;

    std::string search_str = "eins";
    std::string replace_str = "one";
    auto idx = text.find(search_str);                  // am index 0 beginnt 'eins' das wird in idx gespeichert
    text.replace(idx, search_str.size(), replace_str); //replace(von (hier index [0]), bis (hier 4), ersaetzendes wort)

    std::cout << text << std::endl;

    std::ofstream offile;
    offile.open("TextOutput.txt");

    if (offile.is_open())
    {
        offile << text; // wenn man sie oeffnen konnte, dann text abspeichern in offile
    }                   // hier '<<' bedeutet speichern in, im vergleich cout speichert sogesehen in der console
                        // bildlich vorstellen man schiebt text 'in' offile (offene objekt)

    offile.close(); //was man oeffnet schließt auch wieder

    return 0;
}
