#include <iostream>

#include "Image.h"

// Initializer List
// Nach dem Konstruktor 'Image::Image()' kommt ':' und dann die Membervariablen mit initialisierung
// Reihenfolge ist entscheidend, je nachdem wie die Reihenfole in der Image.h deklariert wurde
// muss es auch in der Initializer List sein
Image::Image() : m_width(0), m_height(0), m_matrix(GrayscaleMatrix(m_width, std::vector<uchar>(m_height, 0)))
{
    std::cout << "Created empty image object!" << std::endl;
}

Image::Image(const unsigned int &width, const unsigned int &height)
    : m_width(width), m_height(height), m_matrix(GrayscaleMatrix(m_width, std::vector<uchar>(m_height, 0)))
{
    std::cout << "Created image object with shape=(" << m_width << "," << m_height << ")!" << std::endl;
    std::cout << "Matrix size: (" << m_matrix.size() << "," << m_matrix[0].size() << ")" << std::endl;
}

Image::~Image()
{
    std::cout << "Image object destroyed!" << std::endl;
}
