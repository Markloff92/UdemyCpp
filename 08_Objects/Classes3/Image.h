#include <vector>

using uchar = unsigned char;
using GrayscaleMatrix = std::vector<std::vector<uchar>>;

// priavte / Public sind dafuer da um außerhalb sachen nicht aendern zu duerfen oder auch schon, sprich
// wenn man moechte das der benutzer z.b. m_width oder m_matrix aendern darf sollte man es public setzen
// wenn aber nicht privat, selbe gilt auch fuer methoden wie save_image()

class Image
{
public:
    // Konstruktor
    Image();
    Image(const unsigned int &width, const unsigned int &height);

    // Destruktor
    ~Image();

    // es wird nichts von der instanz veraendert, deswegen const am ende
    void save_image(const char *file_name) const; // const qualifer fuer die methode, membervariable wird nicht changed

private:
    unsigned int m_width;
    unsigned int m_height;
    GrayscaleMatrix m_matrix;
};
