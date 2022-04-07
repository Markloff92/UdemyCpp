#include <iostream>

// 1.) Two Enums can not share the same names
// 2.) No variable can have a name already reserved by an enum
// 3.) Enums are not type safe
// Enum Class ist dafür da, das man Namen doppelt haben kann. (namescope angeben)

enum class PermissionLevel
{
    STUDENT = 1,
    TUTOR = 2,
    INSTRUCTOR = 3,
    ADMIN = 4
};

enum class ExamPerson
{
    STUDENT,
    INSTRUCTOR
};

int main()
{
    PermissionLevel permission_level_jan = PermissionLevel::INSTRUCTOR;
    PermissionLevel permission_level_peter = PermissionLevel::STUDENT;

    return 0;
}
