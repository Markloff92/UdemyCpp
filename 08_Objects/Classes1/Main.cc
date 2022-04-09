#include <iostream>

#include "Image.h"

int main()
{
    // Konstruktor wird aufgerufen wenn man die variable erstellt
    Image my_image1(10, 10); // Objekt von der klasse Image erstellen

    Image my_image2;
    // Dekonstruktor wird aufgerufen wenn wir aus dem aktuellen scope rausgehen wo die variable erstellt wurde
    // das waere in unserem fall wenn wir die main() verlassen, also nach return 0;


    return 0;
}
