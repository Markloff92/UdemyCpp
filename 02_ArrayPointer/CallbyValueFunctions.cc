#include <iostream>

void f(int *p_function) //hier wurde eine weitere pointer variable angelegt, bzw eine lokale kopie
{
    std::cout << "(MAIN): p_function = " << p_function << std::endl;
    std::cout << "(MAIN): &p_function = " << &p_function << std::endl;
}

int main()
{

    int *p_number = new int{4};
    std::cout << "(MAIN): p_number = " << p_number << std::endl;
    std::cout << "(MAIN): p_number = " << &p_number << std::endl;

    f(p_number); // call by value, hier wird der wert übergeben der der pointer hat.

    return 0;
}
