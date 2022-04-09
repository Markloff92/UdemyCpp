#include <iostream>

#include "Image.h"

Image::Image() // Man muss den Klassennamen nochmal als Namespace angeben
{
    m_width = 0;
    m_height = 0;

    std::cout << "Created empty image object!" << std::endl;
}

// Konstruktor definiert
Image::Image(const unsigned int &width, const unsigned int &height)
{
    m_width = width;
    m_height = height;

    std::cout << "Created image object with shape=(" << m_width << "," << m_height << ")!" << std::endl;
}

Image::~Image() // Auch hier gilt klassenname nochmal mit namespace
{
    std::cout << "Image object destroyed!" << std::endl;
}
