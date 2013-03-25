// pops.cpp shows you the percentage of the second number in first

#include <iostream>

int main()
{
    unsigned long long ull_world = 0;
    unsigned long ul_ukraine = 0;

    std::cout << "I'll show you the percentage..." << std::endl;;
    std::cout << "Specify the world population (is around 7B): ";
    std::cin >> ull_world;
    std::cout << "And the population of Ukraine (around 45M): ";
    std::cin >> ul_ukraine;

    std::cout << "The population of Ukraine is ";
    std::cout.precision(4);
    std::cout << static_cast<long double>(ul_ukraine) / (ull_world / 100);
    std::cout << "\% of World's population." << std::endl;

    return 0;
}
