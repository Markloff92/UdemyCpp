#include <iostream>

//Wichtig: wenn zwei pointer auf a zeigen und einer der pointer die value aendert, aendert sich dieses auf bei dem anderen pointer!!

void print_int_pointer(int *p)
{
    std::cout << "Deref " << *p << " Ref: " << p << " Pointer Address " << &p << std::endl;
}

void print_double_pointer(double *p)
{
    std::cout << "Deref " << *p << " Ref: " << p << " Pointer Address " << &p << std::endl;
}

int main()
{
    int a = 1337;
    double b = -13.37;

    int *c = &a;

    print_int_pointer(c);

    *c -= 10;
    print_int_pointer(c);

    int *d = &a;
    print_int_pointer(d);

    *c += 10;
    print_int_pointer(d);

    return 0;
}
