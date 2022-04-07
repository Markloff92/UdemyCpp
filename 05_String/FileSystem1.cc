#include <filesystem>
#include <iostream>

namespace fs = std::filesystem; // alias namen fuer std::filesystem
// filesystem libary:  prüfen ob path existiert, oder ob es eine datei ist oder ordner usw.

int main()
{
    fs::path workspace_path = "D:/UdemyCpp_Template-main/5_String/FileSystem1.cc"; // fs::path siehe cppref site
    fs::path chapter_path;                                                         //weitere variable anlegen
    chapter_path = workspace_path;
    chapter_path /= "5_STLString";                   // '/=' haengt automatisch ein slash mit vorne dran
    fs::path current_file_path = fs::current_path(); // current_path() in welchem ornder die c++ datei liegt!
    current_file_path /= "FileSystem1.cc";

    std::cout << workspace_path << std::endl;
    std::cout << chapter_path << std::endl;
    std::cout << current_file_path << std::endl;

    std::cout << "relative_path: " << current_file_path.relative_path() << std::endl; // Path self
    std::cout << "parent_path: " << current_file_path.parent_path() << std::endl; // in welchem Ordner findet man sie
    std::cout << "filename: " << current_file_path.filename() << std::endl;       // Filename + erweiterung
    std::cout << "stem: " << current_file_path.stem() << std::endl;               // Filename
    std::cout << "extension: " << current_file_path.extension() << std::endl;     // nur erweiterung

    std::cout << "extension: " << fs::exists(current_file_path) << std::endl; // existiert der ordner 1(true)
    std::cout << "is_regular_file: " << fs::is_regular_file(current_file_path)
              << std::endl;                                                            // ist es eine datei 1(true)
    std::cout << "is_directory: " << fs::is_directory(current_file_path) << std::endl; // kein ordner somit 0(false)


    return 0;
}
