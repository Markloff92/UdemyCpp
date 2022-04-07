#include <iostream>


int main()
{
    //Heap allocation

    int *p = new int{4};
    //*p = 4;

    std::cout << "memory address of p: " << &p << std::endl;
    std::cout << "memory address of pointed value: " << p << std::endl;
    std::cout << "Value of the memory address p points to: " << *p << std::endl;

    //Heap de-allocation

    delete p;

    std::cout << p << std::endl;

    p = nullptr; // nullptr wichtig nach der delete angabe!

    std::cout << p << std::endl;

    if (p != nullptr)
    {
        std::cout << *p << std::endl;
    }

    return 0;
}
