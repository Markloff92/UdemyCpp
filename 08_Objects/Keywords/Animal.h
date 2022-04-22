#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
    Animal() = default; // um dem compiler selbst den code des konstruktors erstellen zu lassen. also bei string { }
                        // bei int = 0, double = 0.0 usw, bei Pointern sollte man das nicht machen.
                        // bei = delete; sagt man dem compiler das er gar kein fall code erstellen soll

    Animal(const std::string &name) : m_name(name)
    {
        std::cout << "Animal Constructor!" << std::endl;
    }

    virtual ~Animal()
    {
        std::cout << "Animal Destructor!" << std::endl;
    }

    virtual void my_favourite_food()
    {
        std::cout << "Salad" << std::endl;
    }

    // virtual void make_a_sound() = 0;

private:
    const std::string m_name;
};

class Dog : public Animal // Vererbung
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

    // final gibt an das keine kinderklasse diese virtuelle Funktion nochmal neu definieren kann.
    void my_favourite_food() final
    {
        std::cout << "Meat" << std::endl;
    }

    // void make_a_sound() final
    // {
    //     std::cout << "bark!" << std::endl;
    // }
};
