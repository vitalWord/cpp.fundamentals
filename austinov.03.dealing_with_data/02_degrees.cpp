// degrees.cpp converts D-M-S of ARC into decimal Degrees 

#include <iostream>

int main()
{
    int i_d, i_m, i_s = 0;

    std::cout << "I will convert your coordinate into degrees" << std::endl;
    std::cout << "Please enter it in degrees, minutes and seconds...";
    std::cout << std::endl << "Enter degrees: ";
    std::cin >> i_d;
    std::cout << "and minutes: ";
    std::cin >> i_m;
    std::cout << "and seconds: ";
    std::cin >> i_s;

    // defining the multipliers
    const int S_IN_M = 60;
    const int S_IN_D = 3600;

    // the result should be floating point
    double d_res;

    std::cout << i_d << " degrees, ";
    std::cout << i_m << " minutes, ";
    std::cout << i_s << " seconds = ";

    std::cout.precision(7); // setting the precision for result
    std::cout << (i_d + static_cast<double>(i_m * S_IN_M + i_s) / S_IN_D);
    std::cout << " decimal degrees." << std::endl;

    return 0;
}
