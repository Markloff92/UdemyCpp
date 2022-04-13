#include <vector>

using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

// Getter und Setter, sind dafuer da um auf private member variablen zuzugreifen
// getter wert bekommen, setter wert setzen koennen

class Image
{
public:
    // Konstruktor
    Image();
    Image(const unsigned int width, const unsigned int height);

    // Destruktor
    ~Image();

    // Getter
    unsigned int get_width() const;  // unsigned int weil width and heigth vom selben typ ist
    unsigned int get_height() const; // const am ende weil klar ist das werte nicht geaendert wird, instanz ist gleich

    // Setter
    void set_width(unsigned int new_width);   // hier kein return type beim setter
    void set_height(unsigned int new_height); // hier referenz moeglich

    void save_image(const char *file_name) const;

private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
