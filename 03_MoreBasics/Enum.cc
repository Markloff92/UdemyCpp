#include <iostream>

// Endliche anzahl an Kategorien(Diskrete zustaende) darzustellen, enum sind konstante werte (CAPS)
// Enum value are integers

enum PermissionLevel // Arbeitet wie ein neuer eigener Datentyp
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;

    return 0;
}
