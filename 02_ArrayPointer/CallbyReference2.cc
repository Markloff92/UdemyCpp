#include <iostream>

//CallbyValue
void f1(int number)
{
    number++;
}

//CallbyReference
void f2(int &number)
{
    number++;
}

//CallbyValue
int f3(int number)
{
    number++;

    return number;
}

int main()
{
    int num = 0;
    std::cout << num << std::endl;

    f1(num);
    std::cout << num << std::endl;

    f2(num);
    std::cout << num << std::endl;

    num = f3(num); // um den wert nicht wegzuschmeissen muss dieser noch in die var num geschoben werden.
    std::cout << num << std::endl;

    return 0;
}
