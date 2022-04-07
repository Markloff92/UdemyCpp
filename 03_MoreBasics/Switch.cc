#include <iostream>

// Endliche anzahl an Kategorien(Diskrete zustaende) darzustellen, enum sind konstante werte (CAPS)
// Enum value are integers

enum PermissionLevel //Arbeitet wie ein neuer eigener Datentyp
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

void greet_permission_level_switch(PermissionLevel level)
{
    switch (level) // variable nach der wir abfragen
    {
    case PermissionLevel::STUDENT:
    {
        std::cout << "Hello STUDENT" << std::endl;
        break;
    }
    case PermissionLevel::TUTOR:
    {
        std::cout << "Hello TUTOR" << std::endl;
        break;
    }
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << "Hello INSTRUCTOR" << std::endl;
        break;
    }
    case PermissionLevel::ADMIN:
    {
        std::cout << "Hello ADMIN" << std::endl;
        break;
    }
    default:
    {
        std::cout << "UNKOWN! ERROR!" << std::endl;
        break;
    }
    }
}

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    greet_permission_level_switch(permission_level_jan);

    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;

    return 0;
}
