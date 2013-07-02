/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a function that takes a reference to a string object as its */
/* parameter and that converts the contents of the string to upper   */
/* case. Use the toupper() function described in Table 6.4 of        */
/* Chapter 6. Write a program that uses a loop which allows you to   */
/* test the function with different input.                           */
/* A sample run might look like this:                                */
/*                                                                   */
/* Enter a string (q to quit): go away                               */
/* GO AWAY                                                           */
/* Next string (q to quit): good grief!                              */
/* GOOD GRIEF!                                                       */
/* Next string (q to quit): q                                        */
/* Bye.                                                              */
/*                                                                   */
/* The following is a program skeleton:                              */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>
# include <cctype>

const std::string & to_upper(std::string & inputstr_ref);
const std::string & to_upper(std::string & inputstr_ref)
{
    for (unsigned i = 0; i < inputstr_ref.size(); i++)
    {
        if (std::islower(inputstr_ref.at(i)))
            inputstr_ref.at(i) = std::toupper(inputstr_ref.at(i));
    };
    return inputstr_ref;
}

int main()
{
    std::string input_str;
    std::cout << "Enter a string (q to quit): ";
    while (std::getline(std::cin, input_str) && "q" != input_str)
    {
        std::cout << to_upper(input_str) << std::endl; 
        std::cout << "Next string (q to quit): ";
    };
    std::cout << "Bye." << std::endl;
    
    return 0;
}

