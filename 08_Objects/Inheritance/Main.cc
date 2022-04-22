#include <iostream>
#include <string>

#include "Animal.h"

// Man beachte hier die eigenen gesetzten SCOPES {}, sind wichtig um zu sehen wann der Constructor durchlaufen wird
// und wann der Deconstructor durchlaufen wird, naemlich immer dann wenn der SCOPE zuende ist.

int main()
{
    {
        std::string animal_name = "Tatze";
        Animal animal1(animal_name);
    }

    std::cout << std::endl;

    {
        std::string dog_name = "Bello";
        Dog dog1(dog_name);
    }

    return 0;
}
