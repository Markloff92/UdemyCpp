#include <iostream>

//wenn man ein array übergeben möchte in einer funktion, muss man immer die laenge mit uebergeben. Ausnahme ist ein Char Array
// int *input_array ist das selbe wie int input_array[], beim uebergebne an einer funktion. Da wir ja wissen das ein pointer immer auf das 1. element des arrays
int array_maximum(int *input_array, unsigned int length)
{
    int current_max_value = 0;

    for (int i = 0; i < length; i++)
    {

        if (i == 0)
        {
            current_max_value = input_array[i];
        }
        else if (input_array[i] > current_max_value)
        {
            current_max_value = input_array[i];
        }
    }
    return current_max_value;
}


using std::cin;
using std::cout;
using std::endl;

int main()
{

    unsigned int array_size = 10;

    // Heap Allocation
    int *p = new int[array_size];
    // Size of the pointer itself in Bytes
    cout << sizeof(p) << endl;
    // Size of the first array element, that pointer points to
    cout << sizeof(*p) << endl;

    for (int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    cout << array_maximum(p, array_size);

    // Heap De-Allocation
    delete[] p;

    return 0;
}
