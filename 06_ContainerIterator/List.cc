#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

int main()
{
    std::vector<int> my_vector = {1, 2}; // Vektor ausgeben

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << &my_vector[i] << std::endl; // Speicheraddresse ausgeben
    }

    std::cout << std::endl;

    // Liste braucht mehr Speicher da mit dem Werten selbst jeweils noch 2 Pointer mit abgespeichert werden
    // jeweils einer der auf die vorgaenger und folgenden Adresse zeigt.
    // Wegen Aufbaus der Liste (wie es abgespeichert wird) ist Sie viel Langsamer.

    std::list<int> my_list = {1, 2, 3}; // Liste anlegen, speichert ueber Pointer ab nicht ueber Array

    for (auto it = my_list.begin(); it != my_list.end(); it++)
    {
        std::cout << *it << " " << &*it << std::endl;
    }

    std::cout << std::endl;

    my_list.push_front(0); // aehnlich dem vecotr
    my_list.push_back(4);
    for (auto it = my_list.begin(); it != my_list.end(); it++)
    {
        std::cout << *it << " " << &*it << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
