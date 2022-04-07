#include <fstream>
#include <iostream>
#include <string>

std::string read_text(const std::string &path)
{
    std::string str;
    std::string text;

    std::ifstream iffile;
    iffile.open(path);

    if (iffile.is_open())
    {
        while (std::getline(iffile, str))
        {
            text += str + '\n';
        }
    }
    iffile.close();
    return text;
}

void write_text(const std::string &path, const std::string &text)
{
    std::ofstream offile;
    offile.open(path);

    if (offile.is_open())
    {
        offile << text;
    }
    offile.close();
}


int main() // std::string sind klassen, haben groeße  std::size_t
{
    std::string text = read_text("Text.txt");
    std::cout << "Content : " << text << std::endl;

    /*
    Operations:
        clear
        append, +=, +
        compare
        replace
        substr
    */

    // CLEAR()
    std::string text_copy = text;
    std::cout << "Content : " << text_copy << std::endl;
    text_copy.clear(); // String Leeren
    std::cout << "Content : " << text_copy << std::endl;

    // APPEND()
    std::string text_append = text + "vier\n";
    std::cout << "Content: " << text_append << std::endl;

    text_append.append("fuenf\n");
    std::cout << "Content: " << text_append << std::endl;

    // COMPARE()
    std::string s1 = "Jan";
    std::string s2 = "Jann";
    auto compare = s1.compare(s2); // Methode zuerst Variablenname (Instanz.Mathodename(variable))
    std::cout << "compare: " << compare
              << std::endl; // compare vergleicht die ascii werte, je nachdem welcher laenger ist.

    std::cout << "equal: " << (s1 == s2) << std::endl; // einfacher weg um zwei strings auf gleichheit zu pruefen

    // REPLACE()
    std::string search_str = "nn";
    auto idx = s1.find(search_str);
    s1.replace(idx, search_str.size(), "n");
    std::cout << "Content: " << s1 << std::endl;

    // SUBSTR()
    std::string sub_str = s1.substr(0, 2); // hier auch moeglich wie bei REPLACE() anstatt an stelle '0' -> 'idx'
    std::cout << "Content: " << sub_str << std::endl;

    return 0;
}
