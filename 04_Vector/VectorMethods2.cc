#include <iostream>
#include <numeric>
#include <vector>

void print_vector(const std::vector<int> &my_vector)
{

    for (std::size_t i = 0; i < my_vector.size(); i++)
    {
        std::cout << "Vec [" << i << "] = " << my_vector[i] << std::endl;
    }
    std::cout << std::endl;
}

void print_vector_info(const std::vector<int> &my_vector) // const da nur read only!
{
    std::cout << "Size: " << my_vector.size() << std::endl;
    std::cout << "Capacity: " << my_vector.capacity() << std::endl;
    std::cout << "Empty: " << std::boolalpha << my_vector.empty() << std::endl
              << std::endl; //boolalpa laesst true/false als string raus
}

int main()
{
    std::vector<int> my_vector(10, 5);
    std::iota(my_vector.begin(), my_vector.end(), 0); // aufsteigend auffüllen iota() startwert '0'

    print_vector(my_vector);
    print_vector_info(my_vector);

    int first = my_vector.front(); // front() springt zum 1 element?
    int first2 = my_vector[0];     // alternative ohne die func

    std::cout << first << " " << first2 << std::endl;

    int last = my_vector.back();                 //back() springt zum letzten elemen
    int last2 = my_vector[my_vector.size() - 1]; // alternativ ohne die func

    std::cout << last << " " << last2 << std::endl;

    int *array = my_vector.data(); //  data() gibt pointer zurueck
    std::cout << *array << std::endl;

    std::vector<int>::iterator begin = my_vector.begin();
    std::vector<int>::iterator end = my_vector.end();

    std::cout << *begin << std::endl; // wenn man den wer von begin()/end()
    std::cout << *end << std::endl;   // haben moechte, ist aber ein pointer!!

    // Iteratore works same as pointer which points on array!

    begin++;
    end--;

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;

    return 0;
}
