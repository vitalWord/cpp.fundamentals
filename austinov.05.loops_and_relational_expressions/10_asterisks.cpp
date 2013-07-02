// asterisks.cpp will display n rows of growing number of asterisks

# include <iostream>
# include <string>

int main()
{
    char dot = '.';
    char star = '*';
    int d, s, rows = 0;
    std::cout << "Please enter the number of rows to draw: ";
    std::cin >> rows; std::cout << std::endl;
    for (d = rows - 1, s = 1; d >= 0; --d, ++s)
        std::cout << std::string(d, dot) << std::string(s, star) << std::endl;
    std::cout << std::endl;
    return 0;
};
