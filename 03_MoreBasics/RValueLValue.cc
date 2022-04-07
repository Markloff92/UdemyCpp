#include <iostream>

// falls f(int &v) -> darf nichts reingegeben werden was const ist
// falls f(int v) -> dann alles reingeben, da ja eh eine lokale variable erstellt wird
// falls f(const int v) -> auch hier geht alles
// falls f(const int &v) -> geht nicht alles
// d.h. bei einer referenz '&' geht NICHT alles!

void f(const int &v)
{
    std::cout << v;
}

int main()
{
    int a = 3;        // LValue
    const int b = 3;  // const LValue
    int &c = a;       // LValue reference
    const int &d = a; // const LValeu reference

    f(a);
    f(b);
    f(c);
    f(d);

    f(3);

    return 0;
}
