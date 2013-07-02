// age2mnth.cpp asks you the age and then shows it in months

#include <iostream>

int main(void)
{
    int age;
    age = 0;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "Your age in month is " << age * 12 << std::endl;
    return 0;
}
