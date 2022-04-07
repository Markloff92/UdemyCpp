#include <iostream>

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

// i++; // Post-Increment 'danach'
// ++i; // Pre-Increment 'davor'

int main()
{
    int val = 0;

    std::cout << "Outer val: " << val << std::endl;
    func(val++);
    std::cout << "Inner val: " << val << std::endl;

    return 0;
}
