/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                           */
/* Write aprogram that reads keyboard input to the @ symbol  */
/* and than echoes the input except for digits, converting   */
/* each uppercase character to lowercase, and vice versa.    */
/* (Don’t forget the cctypefamily.)                          */
/*                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <cctype>

int main()
{
    char ch;
    std::cout << "HINT: This app quits as you enter '@'\n";
    std::cout << "Please feel free to enter whatever you want\n";
    while ('@' != (ch = std::cin.get()))
    {
        if (std::isdigit(ch)) continue;
        if (std::islower(ch))
            ch = std::toupper(ch);
        else
            if (std::isupper(ch))
                ch = std::tolower(ch);
        std::cout << ch;
    };
    return 0;
};

