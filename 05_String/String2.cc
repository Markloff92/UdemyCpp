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
    std::cout << text << std::endl;

    std::string search_str = "drei";
    auto idx = text.find(search_str); // beginnt bei index 12, gibt mehr als find() funktion
    std::cout << idx << std::endl;

    // std::string search_str2 = "drey";
    // auto idx2 = text.find(search_str2);
    // std::cout << idx2 << std::endl;
    // std::cout << std::string::npos << std::endl; // eigentlich gibt npos bei nicht finden, -1 aus. Aber
    //                                              // als unsigned int ist es die größt moegliche zahl

    if (idx != std::string::npos)
    {
        std::cout << "Found!" << std::endl;
    }
    else
    {
        std::cout << "Not Found!" << std::endl;
    }

    std::string text2 = "abab";
    std::string search_str2 = "ab";
    auto idx2 = text.rfind(search_str2); // letzte vorkommen von 'ab' -> index 2
    std::cout << idx2 << std::endl;

    return 0;
}
