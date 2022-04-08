#include <iostream>
#include <map>
#include <string>

// Eine Map ist eine Templateklasse
// Mapping(Abbildung), Inputmenge und Outputmenge
// key -> value z.B. "Jan" -> 25

void print_map(std::map<std::string, int> &map)
{
    for (const auto &val : map)
    {
        std::cout << val.first << " " << val.second << std::endl;
    }
}

int main()
{
    std::map<std::string, int> my_map1; // 1.Wert in <>(spitzenklammern) ist der KEY, 2.Wert VALUE

    my_map1["Jan"] = 25; // hier wird ein KEY angelegt solang er noch nicht existiert und VALUE abgespeichert.
    my_map1["Dennis"] = 27;
    my_map1["Jan"] = 26;

    print_map(my_map1);

    auto search_str = "Jan";
    auto it = my_map1.find(search_str); // my_map1.find() returnd iterator zu der stelle wo gefunden
    bool is_in = it != my_map1.end();   // hier iterator zurueckgegeben wenn ungleich also nicht gefunden
                                        // wird, wird enditerator returnd
    std::cout << search_str << " found? " << is_in << std::endl;

    return 0;
}
