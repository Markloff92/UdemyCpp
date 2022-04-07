#include "json.hpp"
#include <fstream>
#include <iostream>


int main()
{
    std::ifstream ifs("c_cpp_properties.json");
    nlohmann::json data; // Erstellen eines Objekts von der json klasse, name data!
    ifs >> data;         // packe ifs in data

    std::cout << data["configurations"][0]["compilerPath"] << std::endl; // da ne liste vorliegt so oeffnen
    std::cout << data["configurations"][0]["intelliSenseMode"] << std::endl;

    // moechte was aendern
    data["configurations"][0]["cppStandard"] = "c++11"; // moeglichkeit zu aendern

    std::ofstream ofs("c_cpp_properties_edited,json");
    ofs << std::setw(4) << data; //formatieren std::setw(4)

    return 0;
}
