#include <iostream>


using std::cin;
using std::cout;
using std::endl;

int main()
{
    // Platz fuer ein Array auf dem Heap reservieren
    unsigned int array_size = 10;

    // Heap Allocation
    int *p = new int[array_size]; //hier laesst sich eine nicht konstante variable uebergeben als array size

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    for (int i = 0; i < array_size; i++)
    {
        cout << p[i] << endl;
        cout << &p[i] << endl;
    }

    // Heap De-Allocation
    delete[] p;

    return 0;
}
