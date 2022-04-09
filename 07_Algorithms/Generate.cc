#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <vector>

// std::generate, werte in einen container abspeichern

using ClockType = std::chrono::steady_clock;
using ClockRes = std::chrono::microseconds;

constexpr std::size_t NUM_ELEMENTS = 1'000'000;

int gen() // Funktion wird 1 Million mal aufgerufen, es reicht ja nur 1 Mal, deswegen static hier sodass nur 1 mal. used
{
    static std::random_device seed_generator{};
    static std::mt19937_64 random_generator{seed_generator()};
    static std::uniform_int_distribution<int> random_distribution{-10, 10};

    return random_distribution(random_generator); // Zufallszahlen bestimmen und ausgeben
}

int main()
{
    std::vector<int> my_vector(NUM_ELEMENTS, 0);

    auto start_time = ClockType::now();

    std::generate(my_vector.begin(), my_vector.end(), gen); // anstelle for() schleife, mit std::generate

    auto end_time = ClockType::now();

    auto elapsed_time_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    auto elapsed_time_us = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    auto elapsed_time_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count();

    std::cout << "Elapsed time ms: " << elapsed_time_ms << std::endl;
    std::cout << "Elapsed time us: " << elapsed_time_us << std::endl;
    std::cout << "Elapsed time ns: " << elapsed_time_ns << std::endl;

    return 0;
}
