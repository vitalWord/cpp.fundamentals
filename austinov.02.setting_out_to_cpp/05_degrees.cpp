// cd2fd.cpp asks you the celsium degrees and converts to farenheit

#include <iostream>

int c2f(float c)
{
    return 1.8 * c + 32.0;
}

int main(void)
{
    float c;
    std::cout << "Please enter a Celsius value: ";
    std::cin >> c;
    std::cout << c << " degrees Celsius is " << c2f(c);
    std::cout << " degrees Farenheit." << std::endl;
    std::cout << "For reference,here is the formula for making the ";
    std::cout << "conversion:\nFahrenheit = ";
    std::cout << "1.8 × degrees Celsius + 32.0" << std::endl;
    return 0;
}
