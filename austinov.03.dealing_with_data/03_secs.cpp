// secs.cpp converts seconds into days, hours, minutes and seconds

#include <iostream>

int main()
{
    int i_s = 0;

    std::cout << "I'll show you seconds in days, hrs, min, sec...";
    std::cout << std::endl << "Enter seconds: ";
    std::cin >> i_s;

    // defining the multipliers
    const int S_IN_M = 60;
    const int S_IN_H = S_IN_M * 60;
    const int S_IN_D = S_IN_H * 24;

    std::cout << i_s << " seconds equals to ";
    std::cout << i_s / S_IN_D << " days, ";
    i_s = i_s % S_IN_D;
    std::cout << i_s / S_IN_H << " hours, ";
    i_s = i_s % S_IN_H;
    std::cout << i_s / S_IN_M << " minutes and ";
    i_s = i_s % S_IN_M;
    std::cout << i_s << " seconds." << std::endl;

    return 0;
}
