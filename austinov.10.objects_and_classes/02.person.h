#include <iostream>
#include <string>

namespace { using std::string; }

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here is a rather simple class definition:                         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

class Person
{
    private:
        static const unsigned LIMIT = 25;
        string lname; // Person’s last name
        char fname[LIMIT]; // Person’s first name
    public:
        Person() { lname = ""; fname[0] = '\0'; } // #1
        Person(const string & ln, const char * fn = "Heyyou"); // #2
        // the following methods display lname and fname
        void Show() const; // firstname lastname format
        void FormalShow() const; // lastname, firstname format
};

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

