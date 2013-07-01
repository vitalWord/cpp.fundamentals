/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here is a rather simple class definition:                         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "02.person.h"     /* the definition is found in 02.person.h */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* It uses both a string object and a character array so that you    */
/* can compare how the two forms are used.                           */
/* Write a program that completes the implementation by providing    */
/* code for the undefined methods. The program in which you use the  */
/* class should also use the three possible constructor calls (no    */
/* arguments, one argument, and two arguments) and the two display   */
/* methods.                                                          */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Person::Person(const string & ln, const char * fn)
{
    lname = ln;
    if (strlen(fn) > LIMIT)
    {
        std::cerr << "First name length is more than " << LIMIT
                  << ". The redundant characters will be discarded";
    };
    std::strcpy(fname, fn);
}

void Person::Show(void) const
{
    std::cout << fname << ' ' << lname << std::endl;
}

void Person::FormalShow(void) const
{
    std::cout << lname << ", " << fname << std::endl;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here’s an example that uses the constructors and methods:         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults
    one.Show();
    cout << endl;
    one.FormalShow();
    // etc. for two and three
*/

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

