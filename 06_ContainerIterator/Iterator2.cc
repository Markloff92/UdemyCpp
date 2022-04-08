#include <iostream>
#include <iterator> // notwendig
#include <list>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> my_vector(5, 0);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    std::list<int> my_list(5, 0);
    std::iota(my_list.begin(), my_list.end(), 0);

    auto it = my_list.begin();

    std::advance(it, 2); // it += 2;    // moeglichkeit wenn ich nicht mit iteratoren arbeiten kann
        // ich stelle den iterator 'it' auf die 2 stelle, mit zeile 21 kann man ausgeben.

    std::cout << "Vector[2] = " << my_vector[2] << std::endl;
    std::cout << "List[2] = " << *it << std::endl;

    auto dist = std::distance(it, my_list.end()); // std::distance( , ) besagt wie weit 2 iteratoren auseinander liegen
    std::cout << "Distance = " << dist << std::endl;

    auto prev = std::prev(it); // iterator zeigt auf vorherige
    auto next = std::next(it); // iterator zeigt auf naechste

    std::cout << "Prev = " << *prev << std::endl; // hier mit '*' operator da iterator ja pointer ist.
    std::cout << "Next = " << *next << std::endl;

    return 0;
}
