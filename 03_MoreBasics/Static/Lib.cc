#include <iostream>

#include "Lib.h"

//static int data[10]{}; //globale variable; geschweifte {} sagt wird mit nullen initalisiert.
//static variablen bleiben über compile vorgang bestehen, da sie direkt vor dem compailen
// angelegt werden. somit bleiben sie auch nach dem compilen besthen. (lifetime)

void function()
{
    static int data2[10]{};
    int data3[10]{};

    //std::cout << data[0] << std::endl;
    std::cout << data2[0] << std::endl;
    std::cout << data3[0] << std::endl;

    data2[0] = -1;
    data3[0] = -1;
}

void helper()
{
    static int data2[10]{};
    int data3[10]{};

    std::cout << data1[0] << std::endl;
    std::cout << data2[0] << std::endl;
    std::cout << data3[0] << std::endl;

    data1[0] = -1;
    data2[0] = -1;
    data3[0] = -1;
}
