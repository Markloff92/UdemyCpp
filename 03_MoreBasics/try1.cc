#include <iostream>

enum PermissionLevel //Arbeitet wie ein neuer eigener Datentyp
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4,
    UNKNOWN = 5
};

struct UserData
{
    unsigned int ID;
    PermissionLevel permission_level;
};

void greet_permissionlevel(PermissionLevel status)
{
    switch (status)
    {
    case PermissionLevel::STUDENT:
    {
        std::cout << " Level STUDENT " << std::endl;
        break;
    }
    case PermissionLevel::TUTOR:
    {
        std::cout << " Level TUTOR " << std::endl;
        break;
    }
    case PermissionLevel::INSTRUCTOR:
    {
        std::cout << " Level INSTRUCTOR " << std::endl;
        break;
    }
    case PermissionLevel::ADMIN:
    {
        std::cout << " Level ADMIN " << std::endl;
        break;
    }
    case PermissionLevel::UNKNOWN:
    {
        std::cout << " Level UNKNOWN " << std::endl;
        break;
    }
    default:
    {
        std::cout << "ERROR" << std::endl;
    }
    }
}

int main()
{
    UserData user_Linda = {5018589, PermissionLevel::STUDENT};

    PermissionLevel user_pascal = PermissionLevel::ADMIN;
    greet_permissionlevel(user_Linda.permission_level); //über struktur
    greet_permissionlevel(user_pascal);
    return 0;
}
