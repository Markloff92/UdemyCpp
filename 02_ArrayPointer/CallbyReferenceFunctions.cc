#include <iostream>

// call by value (local copy)
void f(int *p_function)
{
    std::cout << "(F): p_function = " << p_function << std::endl; //das ist das worauf die pointer zeigen
    std::cout << "(F): &p_function = " << &p_function << std::endl;
}

// call by reference
void g(int *&p_function) // das & ist übergeber einer reference d.h. es wird exakt der pointer aus p_number übergeben
{
    std::cout << "(G): p_function = " << p_function << std::endl; //das ist das worauf die pointer zeigen
    std::cout << "(G): &p_function = " << &p_function << std::endl;
}


int main()
{

    int *p_number = new int{4};
    std::cout << "(MAIN): p_number = " << p_number << std::endl; //das ist das worauf die pointer zeigen
    std::cout << "(MAIN): p_number = " << &p_number << std::endl;

    f(p_number);

    g(p_number);

    return 0;
}
