#include <iostream>
#include <numeric>
#include <vector>

// auto leitet nur den datentyp selbst ab. NICHT const oder reference
// d.h. auto &vec oder const auto &vec usw...beachte wann const? wenn nur read ist!
// auto damit kann der compiler selbst entscheiden welcher Datentyp passend ist
// bei iteratoren auto benutzen, ganz klare empfehlung!


void print_vector(const std::vector<double> &my_vector)
{

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec [" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}

void print_vector_info(const std::vector<double> &my_vector) // const da nur read only!
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << std::endl
              << std::endl; //boolalpa laesst true/false als string raus
}

int main()
{
    std::vector<double> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0);

    print_vector(my_vector);
    print_vector_info(my_vector);

    // auto begin = my_vector.begin(); // da ja der datentyp der funktion fest vorgegeben ist
    // auto end = my_vector.end();     // kann man hier mit auto arbeiten.

    // std::cout << *begin << std::endl;
    // std::cout << *end << std::endl;


    // [begin, end) begin inklusive range; end exklusive der range!
    for (auto it = my_vector.begin(); it != my_vector.end(); ++it)
    {
        std::cout << *it << std::endl;
    }

    // For-each loop, um sauber den gesamten vector auszugeben oder wenn man ueber den gesamten container iterieren moechte
    for (auto &val : my_vector)
    {
        std::cout << val << std::endl;
    }

    return 0;
}
