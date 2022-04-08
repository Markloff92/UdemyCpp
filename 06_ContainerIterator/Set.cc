#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>

// Set(Menge)

void print_set(const std::set<std::string> &set)
{
    for (const auto &val : set) // for-each loop funktioniert fuer jeden container
    {
        std::cout << val << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    std::set<std::string> math_course; // so anlegen

    math_course.insert("Jan"); // ein Element hinzufuegen
    math_course.insert("Dennis");
    math_course.insert("Peter");

    print_set(math_course);

    std::set<std::string> coding_course; // so anlegen

    coding_course.insert("Jan"); // ein Element anlegen
    coding_course.insert("Nina");
    coding_course.insert("Mats");

    print_set(coding_course);

    // Set Union
    std::cout << "Union: " << std::endl;
    std::set<std::string> students_union; // Neue Menge
    std::set_union(math_course.begin(),   // Vereinigung alle zusammenfuegen
                   math_course.end(),
                   coding_course.begin(),
                   coding_course.end(),
                   std::inserter(students_union, students_union.end()));
    print_set(students_union);

    // Set Intersection
    std::cout << "Intersection: " << std::endl; // Schnittmenge ( es bleibt nur Jan)
    std::set<std::string> students_intersection;
    std::set_intersection(math_course.begin(),
                          math_course.end(),
                          coding_course.begin(),
                          coding_course.end(),
                          std::inserter(students_intersection, students_intersection.end()));
    print_set(students_intersection);

    // Set Difference
    std::cout << "Difference: " << std::endl; // ueberschneidung
    std::set<std::string> students_difference;
    std::set_difference(math_course.begin(),
                        math_course.end(),
                        coding_course.begin(),
                        coding_course.end(),
                        std::inserter(students_difference, students_difference.end()));
    print_set(students_difference);

    // Set SymmetricDifference
    std::cout << "Symmetric Difference: " << std::endl;
    std::set<std::string> students_symmetric;
    std::set_symmetric_difference(math_course.begin(),
                                  math_course.end(),
                                  coding_course.begin(),
                                  coding_course.end(),
                                  std::inserter(students_symmetric, students_symmetric.end()));
    print_set(students_symmetric);

    return 0;
}
