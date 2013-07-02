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

Stonewt Stonewt::operator+(const Stonewt & s) const
{
    return Stonewt(pounds + s.pounds);
}

Stonewt Stonewt::operator-(const Stonewt & s) const
{
    return Stonewt(pounds - s.pounds);
}

Stonewt Stonewt::operator*(const Stonewt & s) const
{
    return Stonewt(pounds * s.pounds);
}

std::ostream & operator<<(std::ostream & o, const Stonewt & s)
{
    if (Stonewt::STN == s.st)
        o << s.stone << " stone, " << s.pds_left << " pounds" << std::endl;
    if (Stonewt::LBS == s.st)
        o << s.pounds << " pounds" << std::endl;
    return o;
}

