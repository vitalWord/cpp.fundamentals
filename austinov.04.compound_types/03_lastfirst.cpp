// it asks for a first and last name and then shows it comma separated

#include <iostream>
#include <cstring>

int main()
{
    char first [10] = {};
    char last [13] = {};

    std::cout << "What is your first name? ";
    std::cin.getline(first, 10);
    std::cout << "What is your last name? ";
    std::cin.getline(last, 13);

    char output [25] = {};
    strcat(output, last);
    strcat(output, ", ");
    strcat(output, first);
    std::cout << "Here's the information in a single string: ";
    std::cout << output << std::endl;

    return 0;
};
