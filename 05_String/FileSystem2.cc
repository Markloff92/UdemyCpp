#include <filesystem>
#include <iostream>

namespace fs = std::filesystem; // alias namen fuer std::filesystem
// filesystem libary:  prüfen ob path existiert, oder ob es eine datei ist oder ordner usw.

int main()
{
    fs::path current_path = fs::current_path();
    fs::path current_file_path = fs::current_path();
    current_file_path /= "FileSystem2.cc";

    // Ueber den Ordner Iterieren
    for (auto it = fs::directory_iterator(current_path); it != fs::directory_iterator{}; ++it)
    {
        std::cout << *it << std::endl;
    }

    // Neuen Ordner erstellen
    fs::path new_directory_path;              // variable
    new_directory_path /= fs::current_path(); // da liegt er
    new_directory_path /= "test";             // so soll er heißen

    if (!fs::exists(new_directory_path)) // nur anlegen wenn er nicht schon existiert
    {
        fs::create_directory(new_directory_path); // anlegen
    }

    // Datei Kopieren
    fs::path new_file_path;
    new_file_path /= new_directory_path;
    new_file_path /= "FileSystemCopy.cc";

    if (!fs::exists(new_file_path))
    {
        fs::copy_file(current_file_path, new_file_path);
    }

    return 0;
}
