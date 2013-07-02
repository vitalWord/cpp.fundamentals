/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Rewrite the Stonewt class (Listings 11.16 and 11.17) so that it   */
/* overloads all six relational operators. The operators should      */
/* compare the pounds members and return a type bool value. Write a  */
/* program that declares an array of six Stonewt objects and         */
/* initializes the first three objects in the array declaration.     */
/* Then it should use a loop to read in values used to set the       */
/* remaining three array elements. Then it should report the         */
/* smallest element, the largest element, and how many elements are  */
/* greater or equal to 11 stone. (The simplest approach is to create */
/* a Stonewt object initialized to 11 stone and to compare the other */
/* objects with that object.)                                        */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "06.stncmp.h"
#include <array>

int main()
{
    std::array<Stonewt, 6> arrostn = {Stonewt(12,3), 
                                      Stonewt(13,4),
                                      Stonewt(14.99)};

    for (unsigned i = 3; i < 6; i++)
    {
        std::cout << "Please enter the weight: ";
        std::cin >> arrostn[i];
    };

    Stonewt smallest = 0;
    Stonewt largest = 0;
    Stonewt stone11 = Stonewt(11, 0);
    unsigned counter = 0;

    for (unsigned i = 0; i < 6; i++)
    {
        if (arrostn[i] > largest) largest = arrostn[i];
        if (arrostn[i] < smallest || 0 == i) smallest = arrostn[i];
        if (arrostn[i] >= stone11) counter++;
    };

    std::cout << "The smallest is " << smallest;
    std::cout << "The largest is " << largest;
    std::cout << counter << " are greater than 11 stone;" << std::endl;
}

