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
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef STNCMP_H_
#define STNCMP_H_

#include <iostream>

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14};
        enum State {STN, LBS, FLT};
        int stone;
        double pds_left;
        double pounds;
        State st;
    public:
        Stonewt(double lbs);
        Stonewt(int stn, double lbs);
        Stonewt() { stone = pounds = pds_left = 0; }
        ~Stonewt() {}
        void set_st(State s) { st = s; }
        bool operator>(const Stonewt & s) const;
        bool operator<(const Stonewt & s) const;
        bool operator>=(const Stonewt & s) const;
        bool operator<=(const Stonewt & s) const;
        bool operator==(const Stonewt & s) const;
        bool operator!=(const Stonewt & s) const;
        friend std::ostream & operator<<(std::ostream & o, const Stonewt & s);
        friend std::istream & operator>>(std::istream & istr, Stonewt & s);
};
#endif

