/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Do Exercise 1 from Chapter 9 but replace the code shown there     */
/* with an appropriate golf class declaration.                       */
/*                                                                   */
/* Replace setgolf(golf &, const char*, int) with a constructor with */
/* the appropriate argument for providing initial values.            */
/*                                                                   */
/* Retain the interactive version of setgolf() but implement it by   */
/* using the constructor (For example, for the code for setgolf(),   */
/* obtain the data, pass the data to the constructor to create a     */
/* temporary object and assign the temporary object to the invoking  */
/* object, which is *this.)                                          */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <string>
#include "03.golf.h"

Golf::Golf(const char * name, int hc)
{
    std::strcpy(fullname, name);
    handicap = hc;
}

int Golf::set()
{
    int result = 0;
    char name[Len];
    int hc = 0;
    std::cout << "Please enter the name: ";
    std::cin.ignore(Len, '\n');
    if (std::cin.getline(name, Len) && '\0' != name[0])
    {
        std::cout << "Please enter the handicap: ";
        std::cin >> hc;
        *this = Golf(name, hc);
        result = 1;
    };
    return result;
}

void Golf::show() const
{
    std::cout << fullname << ", " << handicap << std::endl;
}
