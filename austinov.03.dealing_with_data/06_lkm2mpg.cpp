// lkm2mpg.cpp converts mpg to lp100km

#include <iostream>

int main()
{
    unsigned int ui_lkm = 0;

    std::cout << "I can convert liters per 100 km into mpg." << std::endl;
    std::cout << "Enter the consumption value to convert: ";
    std::cin >> ui_lkm;

    const double MI_IN_100KM = 62.1371;
    const double L_IN_GAL = 3.78541;
    const double RATIO = MI_IN_100KM * L_IN_GAL;

    std::cout << ui_lkm << " liters per 100 km is around ";
    std::cout << RATIO / ui_lkm << " mpg." << std::endl;

    return 0;
}
