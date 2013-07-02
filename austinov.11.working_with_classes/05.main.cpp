/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it   */
/* has a state member that governs whether the object is interpreted */
/* in stone form, integer pounds form, or floating-point pounds form */
/* Overload the <<operator to replace the show_stn() and show_lbs()  */
/* methods. Overload the addition, subtraction, and multiplication   */
/* operators so that one can add, subtract, and multiply Stonewt     */
/* values. Test your class with a short program that uses all the    */
/* class methods and friends.                                        */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "05.stonewt.h"

int main()
{
    Stonewt one = Stonewt(1, 1);
    Stonewt two = 222.22;

    std::cout << "One: " <<  one << "Two: " << two;
    std::cout << "one+two=" << one + two;
    std::cout << "two-one=" << two - one;
    std::cout << "one*two=" << one * two;
}

