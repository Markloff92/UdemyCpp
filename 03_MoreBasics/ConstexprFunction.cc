#include <iostream>

// constexpr wenn es geht mach es, wenn nicht auch gut dann zur runtime

constexpr int faculty(int n) // constexpr bedeutet das hier die Funktion schon zur compiletime(debug) ausgeführt
{                            // und abgespeichert wurd und nicht erst zur runtime(aufruf exe)
    if (n > 1)
    {
        return n * faculty(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int l = faculty(3);

    int a[faculty(3)]{}; // normalerweise ist das verboten, da die array length vorher definiert sein muss
                         // hier aber moeglich durch constexpr da ja zur compiletime der wert vorliegt

    return 0;
}
