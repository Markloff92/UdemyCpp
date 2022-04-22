#pragma once

#include <iostream>
#include <string>

// Computerspiel dort gibt es Tiere, diese Tiere haben Gemeinsamkeiten und auch Unterschiede, praktisch waere es die
// Gemeinsamkeiten nicht mehrmals aufschreiben zu muessen. Alles was die Klassen gemeinsam haben in eine Base Class zu packen
// (Elternklasse) alle Unterschiede kommen in eine Unterklasse
class Animal
{
public:
    Animal(const std::string &name) : m_name(name) // Konstruktor Animal() darin wird ein Name uebergeben
    { // weiterhin nach ':' folgt Definition m_name  bekommt das was auch immer in name gespeichert wird
        std::cout << "Animal Constructor!" << std::endl;
    }

    ~Animal()
    {
        std::cout << "Animal Destructor!" << std::endl;
    }

private:
    const std::string m_name; // Membervariable
};

class Dog : public Animal // Vererben 'class Dog' Kindsklasse, ':' danach die Klasse von der man Erbt

// Animal ersetzen mit Dog
// Man muss weiterhin einen Constructor und Destructor implementieren auch wenn man Erbt von einer Klasse

{
public:
    Dog(const std::string &name) : Animal(name) // hier Animal(name), man ruft den Initilazer der Elternklasse auf
    {
        std::cout << "Dog Constructor!" << std::endl;
    }

    ~Dog()
    {
        std::cout << "Dog Destructor!" << std::endl;
    }
};
