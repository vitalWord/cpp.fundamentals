/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here is a rather simple class definition:                         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "02.person.h"  /* the actual definition is in a header file */

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

int main()
{
    using std::cout;
    using std::endl;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here’s an example that uses the constructors and methods:         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults
    one.Show();
    cout << endl;
    one.FormalShow();
    // etc. for two and three

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();

}

