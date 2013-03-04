// hour:min.cpp displays the entered hour and minute in HH:MM format

#include <iostream>

void pretty_print(int hh, int mm)
{
    std::cout << "Time: " << hh << ":" << mm << std::endl;
}

int main(void)
{
    int hh, mm;
    std::cout << "Enter the number of hours: ";
    std::cin >> hh;
    std::cout << "Enter the number of minutes: ";
    std::cin >> mm;
    pretty_print(hh, mm);
    return 0;
}
