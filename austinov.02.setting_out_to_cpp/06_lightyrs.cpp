// fl2yd.cpp asks the length in furlong and converts to yards

#include <iostream>

int ly2au(float d)
{
    return 63240 * d;
}

int main(void)
{
    float d;
    std::cout << "Enter the number in light years: ";
    std::cin >> d;
    std::cout << d << " light years = " << ly2au(d);
    std::cout << " astronomical units." << std::endl;
    return 0;
}
