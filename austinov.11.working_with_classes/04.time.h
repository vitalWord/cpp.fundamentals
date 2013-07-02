/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Rewrite the final Time class example (Listings 11.10, 11.11, and  */
/* 11.12) so that all the overloaded operators are implemented using */
/* friend functions.                                                 */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef MYTIME3_H_
#define MYTIME3_H_

#include <iostream>

class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time() { hours = minutes = 0; }
        Time(int h, int m = 0);
        void AddMin(int m);
        void AddHr(int h) { hours += h; }
        void Reset(int h = 0, int m = 0);
        friend Time operator+(const Time & t0, const Time & t1);
        friend Time operator-(const Time & t0, const Time & t1);
        friend Time operator*(const Time & t, double n);
        friend Time operator*(double m, const Time & t) { return t * m; }
        friend std::ostream & operator<<(std::ostream & os, const Time & t);
};

#endif

