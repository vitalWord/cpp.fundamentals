// it asks for a first and last name and then shows it comma separated

#include <iostream>
#include <string>

int main()
{
    std::string first, last, output;

    std::cout << "What is your first name? ";
    getline(std::cin, first);
    std::cout << "What is your last name? ";
    getline(std::cin, last);

    output = last + ", " + first;
    std::cout << "Here's the information in a single string: ";
    std::cout << output << std::endl;

    return 0;
};
