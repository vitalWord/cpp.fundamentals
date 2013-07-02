/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Consider the following structure declaration:                     */
/*
    struct customer
    {
        char fullname[35];
        double payment;
    };
*/
/* Write a program that adds and removes customer structures from a  */
/* stack, represented by a Stack class declaration in listing 10.10. */
/* Each time a customer is removed, his or her payment should be     */
/* added to a running total, and the running total should be         */
/* reported.                                                         */
/* Note: You should be able to use the Stack class unaltered; just   */
/*       change the typedef declaration so that Item is type         */
/*       customerinstead of unsigned long.                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h #include "stack.h"
#include "05.stack.h"

int main()
{
    Stack st; // create an empty stack
    char ch;
    customer cs;
    double total = 0;
    std::cout << "Please enter A to add customer," << std::endl
              << "P to pop a cusromer, or Q to quit." << std::endl;

    while (std::cin >> ch && tolower(ch) != 'q')
    {
        while (std::cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            std::cout << '\a';
            continue;
        };
        switch(ch)
        {
            case 'A':
            case 'a':
                std::cout << "Enter a customer name: ";
                std::cin.getline(cs.fullname, 35);
                std::cout << "Enter payment: ";
                std::cin >> cs.payment;
                if (st.isfull())
                    std::cout << "stack already full" << std::endl;
                else st.push(cs);
                break;
            case 'P':
            case 'p':
                if (st.isempty())
                    std::cout << "stack already empty" << std::endl;
                else
                {
                    st.pop(cs);
                    std::cout << "Total: "
                              << (total += cs.payment) << std::endl;
                };
                break;
        };
        std::cout << "Please enter A to add a customer," << std::endl
                  << "P to pop a customer, or Q to quit." << std::endl;
    };
    std::cout << "Bye\n";
    return 0;
}

