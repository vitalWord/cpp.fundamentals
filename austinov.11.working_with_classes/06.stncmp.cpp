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

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    st = LBS;
}

Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    st = STN;
}

bool Stonewt::operator>(const Stonewt & s) const {return pounds > s.pounds;}
bool Stonewt::operator<(const Stonewt & s) const {return pounds < s.pounds;}

bool Stonewt::operator>=(const Stonewt & s) const {return pounds >= s.pounds;}
bool Stonewt::operator<=(const Stonewt & s) const {return pounds <= s.pounds;}

bool Stonewt::operator==(const Stonewt & s) const {return pounds == s.pounds;}
bool Stonewt::operator!=(const Stonewt & s) const {return pounds != s.pounds;}

std::ostream & operator<<(std::ostream & o, const Stonewt & s)
{
    if (Stonewt::STN == s.st)
        o << s.stone << " stone, " << s.pds_left << " pounds" << std::endl;
    if (Stonewt::LBS == s.st)
        o << s.pounds << " pounds" << std::endl;
    return o;
}

std::istream & operator>>(std::istream & istr, Stonewt & s)
{
    double lbs;
    istr >> lbs;
    s = Stonewt(lbs);
    return istr;
}

