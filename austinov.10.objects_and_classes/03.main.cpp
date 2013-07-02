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

#include "03.golf.h"

int main()
{
    size_t ar_sz = 0;
    std::cout << "Please enter the number of golfers: " << std::flush;
    while (!(std::cin >> ar_sz)) {
        while (std::cin.get() != '\n') continue;
        std::cout << "Please enter the integer value: " << std::flush;
        std::cin.clear();
    };
    std::cout << "You've entered " << ar_sz << std::endl;

    Golf * golfers = new Golf[ar_sz];

    unsigned i = 0;
    while (i < ar_sz && golfers[i].set()) i++;
    
    std::cout << std::endl << "Here are your golfers: " << std::endl;

    for (unsigned g = 0; g < i; g++) golfers[g].show();

    delete[] golfers;

    return 0;
}

