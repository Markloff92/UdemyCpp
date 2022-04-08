#include <iostream>
#include <list>
#include <numeric>
#include <vector>

// Siehe Iteratorlibary
// BEACHTE ein Iterator beim vector ist wie ein pointer auf ein array
// Siehe Zeile 24, inhalt wird ueber '*' operator ausgegeben. da 'it1' ein pointer unter der haube ist!

int main()
{
    std::vector<int> my_vector(5, 0);                 // Vector erstellen
    std::iota(my_vector.begin(), my_vector.end(), 0); // iota aufsteigend auffuellend

    std::list<int> my_list(5, 0); // Liste erstellen
    std::iota(my_list.begin(), my_list.end(), 0);

    // ForwardIterator
    auto it1 = my_vector.begin(); // std::vector<int>::iterator optional, Anfangsiterator 'it1' zeigt auf 1.element
    auto it2 = my_vector.end();   // Enditerator 'it2' zeigt hinter das letzte element. NICHT auf das letzte!

    for (; it1 != it2; ++it1) // for (auto it = it1; it1 != it2; ++it1) optional
    {                         // ich schiebe solange den anfangsiterator nach rechts bis anfangs == enditerator ist!
        std::cout << *it1 << " " << &(*it1) << " " << &it1 << std::endl; // wert '*it1', adresse vom wert '&(*it1)'
    } // '&it1' gibt die adresse des iterators selbst aus, die ist immer gleich.
    std::cout << std::endl;

    // Const ForwardIterator
    auto it3 = my_vector.cbegin(); // const iterator, werte duerfen nicht veraendert werden
    auto it4 = my_vector.cend();   // std::vector<int>::const_iterator als optional fuer auto

    for (; it3 != it4; ++it3)
    {
        std::cout << *it3 << " " << &(*it3) << " " << &it3 << std::endl;
        // *it3 = 10;
    }
    std::cout << std::endl;

    // BidirectionalIterator
    auto it5 = my_list.rbegin(); // auto = 'std::list<int>::iterator' auch hier wieder optional zu auto
    auto it6 = my_list.rend();   // rbegin(),rend() von hinten nach vorne, r steht fuer reverse

    for (; it5 != it6; ++it5)
    {
        std::cout << *it5 << " " << &(*it5) << " " << &it5 << std::endl;
    }
    std::cout << std::endl;

    // Const BidirectionalIterator
    auto it7 = my_list.crbegin(); // crbegin(), crend() -> reverse mit const.
    auto it8 = my_list.crend();

    for (; it7 != it8; ++it7)
    {
        std::cout << *it7 << " " << &(*it7) << " " << &it7 << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
