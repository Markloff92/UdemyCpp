#pragma once

#include <iostream>
#include <string>

// Polymorphismus bedeutet ich moechte eine Funktion haben die fuer beide classen gilt
// virtuelle funktionen liegen in elternklasse vor, sodass wenn man etwas von dog reingibt wuerde er uber override
// die richtige funktion suchen

class Animal
{
public:
    Animal(const std::string &name) : m_name(name)
    {
        std::cout << "Animal Constructor!" << std::endl;
    }

    ~Animal()
    {
        std::cout << "Animal Destructor!" << std::endl;
    }

    virtual void my_favourite_food() // virtual hier in baseclass um in DOG class dann override zu schreiben
    {
        std::cout << "Salad" << std::endl;
    }

private:
    const std::string m_name;
};

class Dog : public Animal
{
public:
    Dog(const std::string &name) : Animal(name)
    {
        std::cout << "Dog Constructor!" << std::endl;
    }

    ~Dog()
    {
        std::cout << "Dog Destructor!" << std::endl;
    }

    void my_favourite_food() override // hier override um zu ueberschreiben, compiler anweisen das funktion exisitiert
    {
        std::cout << "Meat" << std::endl;
    }
};
