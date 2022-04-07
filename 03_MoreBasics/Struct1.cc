#include <iostream>


enum PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData //gebündelt Daten abspeichern
{
    char *name;
    unsigned int id;
    PermissionLevel permission_level;
};

void greet_permission_level(PermissionLevel level)
{
    switch (level)
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
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR; // enum zuweisung mit '::'
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;


    UserData user_jan = {
        "Jan",
        10802121,
        permission_level_jan}; // 1.Moeglichkeit struct abspeichern wenn ich weiß was welche werte bekommt

    greet_permission_level(user_jan.permission_level);

    UserData user_peter; // mit . Punktoperator kann man einzelnen Attribute ansteuern.
    user_peter.name = "Peter";
    user_peter.id = 108882902;
    user_peter.permission_level = permission_level_peter;

    greet_permission_level(user_peter.permission_level);

    return 0;
}
