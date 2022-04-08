#include <iostream>
#include <stack>

// Stack ist eine LIFO (Last-in, First-out) Datenstruktur

void correct_exam(std::stack<int> &stack)
{
    while (stack.size() > 0) // solange wie mein stack elemente hat abarbeiten
    {
        std::cout << "Done with student: " << stack.top() << std::endl; // stack.top() oberste nehmen
        stack.pop();                                                    // entfernen von oben
    }
}

int main()
{
    std::stack<int> my_stack; // Erstellen eines stack

    my_stack.push(1080131311); // werte hinzufuegen
    my_stack.push(1080131312); // werte hinzufuegen
    my_stack.push(1080131313); // werte hinzufuegen

    correct_exam(my_stack);

    return 0;
}
