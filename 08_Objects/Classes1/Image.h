// Klassen haben keywords z.b. public: oder private:
// public: kann man von außen sehen, kann man außerhalb der klasse aufrufen
// private: nicht außerhalb aufrufbar

class Image // class definieren danach name {};
{
public:
    // Konstruktor
    Image();                           // Konstruktor ohne parameter
    Image(const unsigned int &width,   // Konstruktor deklariert
          const unsigned int &height); // Konstruktor definieren name selbst der Klasse + in () Parameter

    // Destruktor
    ~Image(); // Dekonstruktor faengt immer mit ~ an und wird ohne Parameter geschrieben

private:
    unsigned int m_width; // 'm_' steht fuer Member oder Attribute
    unsigned int m_height;
};
