#include <iostream>
#include <random> // include random
#include <vector>

// Pseudo-Random number generators

constexpr std::size_t NUM_ELEMENTS = 1'000'000;

int main()
{
    std::vector<int> my_vector(NUM_ELEMENTS, 0);

    std::random_device seed_generator{};
    std::mt19937_64 random_generator{seed_generator()};              // moeglich auch mit einer int zahl {42}
    std::uniform_int_distribution<int> random_distribution{-10, 10}; // von -10, 10 sampeln

    // wenn man immer den selben seed uebergibt, dann kommt immer das selbe raus, siehe zeile 14 (auskommentiert)
    // wenn man das umgehen will, und immer andere haben moechte(nur moeglich bei unterstützenden CPU's) siehe original

    // random_distribution(random_generator) um eine Zahl zu generieren, wuerde einen int returnen
    // diesen int dann im vektor[i] abspeichern
    for (std::size_t i = 0; i < NUM_ELEMENTS; i++)
    {
        my_vector[i] = random_distribution(random_generator);
    }

    // ....

    for (std::size_t i = 0; i < 10; i++) // ersten 10 werte ausgeben.
    {
        std::cout << my_vector[i] << std::endl;
    }

    return 0;
}
