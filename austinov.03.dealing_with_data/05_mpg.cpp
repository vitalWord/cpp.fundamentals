// mpg.cpp counts the fuel consumption in mpg or lp100km

#include <iostream>

int main()
{
    unsigned int ui_dist = 0;
    unsigned int ui_fuel = 0;

    std::cout << "I can count the Fuel Consumption." << std::endl;;
    std::cout << "Enter the mileage (in miles or km): ";
    std::cin >> ui_dist;
    std::cout << "And specify the fuel amount (in gal or liter): ";
    std::cin >> ui_fuel;

    std::cout << "The average consumption is around ";
    std::cout.precision(3);
    std::cout << ui_dist / ui_fuel << " mpg," << std::endl;;
    std::cout << "or " << 100 * ui_fuel / static_cast<double>(ui_dist);
    std::cout << " liters per 100 km accordingly." << std::endl;

    return 0;
}
