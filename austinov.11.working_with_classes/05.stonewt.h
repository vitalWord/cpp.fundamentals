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

#ifndef STONEWT_H_
#define STONEWT_H_

#include <iostream>

class Stonewt
{
    public:
        enum State {STN, LBS, FLT};
    private:
        enum {Lbs_per_stn = 14};
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
        Stonewt operator+(const Stonewt & s) const;
        Stonewt operator-(const Stonewt & s) const;
        Stonewt operator*(const Stonewt & s) const;
        friend std::ostream & operator<<(std::ostream & o, const Stonewt & s);
};
#endif

