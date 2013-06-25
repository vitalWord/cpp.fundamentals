/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Redo Listing 9.9, replacing the character array with a string     */
/* object. The program should no longer have to check whether the    */
/* input string fits, and it can compare the input string to "" to   */
/* check for an empty line.                                          */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>

void strcount(const std::string);

void strcount(const std::string str)
{
    static int total = 0;
    size_t count = str.size();
    std::cout << "\"" << str << "\" contains " << count << " characters\n";
    std::cout << (total += count) << " characters total\n";
}

int main()
{
    std::string input;
    std::cout << "Enter a line:\n";
    while (std::getline(std::cin, input) && "" != input)
    {
        strcount(input);
        std::cout << "Enter next line (empty line to quit):\n";
        std::getline(std::cin, input);
    }
    std::cout << "Bye\n";
    return 0;
}

