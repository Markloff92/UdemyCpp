#include <iostream>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

// pair ist ein container oder klasse, die immer zwei werte abspeichern kann.
// Art Struktur, wo man 2 werte abspeichern kann
// tuple bei mehr als 3.

// Zwei typen definiert (abgekuerzte namen)
using tuple_user = std::tuple<int, std::string, bool>; // hier 3 datentypen angegeben, somit hat tuple 3 attribute!
using pair_user = std::pair<int, std::string>;         // hier 2 datentypen da pair 2 attribute hat!

void print_pair(pair_user &pair)
{
    std::cout << pair.first << std::endl;  // zugriff auf first, ueber '.' operator das attribute aufrufen
    std::cout << pair.second << std::endl; // zugriff auf second
    std::cout << std::endl;
}

void print_tuple(tuple_user &tpl)
{
    std::cout << std::get<0>(tpl) << std::endl; // hier geht das nicht ueber '.' operator, da dynamisch
    std::cout << std::get<1>(tpl) << std::endl; // deswegen hier ueber std::get<>() funktion
    std::cout << std::get<2>(tpl) << std::endl;
    std::cout << std::endl;
}

void print_students(std::vector<tuple_user> &students)
{
    for (auto &stud : students)
    {
        print_tuple(stud);
    }
}

int main()
{
    tuple_user my_tpl1(23, "Jan", true); // so kann man initalisieren mit runden klammern()
    print_tuple(my_tpl1);

    tuple_user my_tpl2 = std::make_tuple(25, "Dennis", false); // eine weitere moeglichkeit zu initalisieren.
    print_tuple(my_tpl2);

    std::vector<tuple_user> students;
    students.push_back(my_tpl1);
    students.push_back(my_tpl2);

    std::pair<int, std::string> my_pair1(23, "Jan"); // hier das selbe beim pair
    print_pair(my_pair1);

    std::pair<int, std::string> my_pair2 = std::make_pair(25, "Dennis"); //siehe oben drueber
    print_pair(my_pair2);

    return 0;
}
