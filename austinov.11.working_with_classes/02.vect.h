/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Modify the Vector class header and implementation files (Listings */
/* 11.13 and 11.14) so that the magnitude and angle are no longer    */
/* stored as data components.Instead, they should be calculated on   */
/* demand when the magval() and angval() methods are called.         */
/* You should leave the public interface unchanged (the same public  */
/* methods with the same arguments) but alter the private section,   */
/* including some of the private method and the method               */
/* implementations.                                                  */
/* Test the modified version with Listing 11.15, which should be     */
/* left unchanged because the public interface of the Vector class   */
/* is unchanged.                                                     */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR
{
    class Vector
    {
        public:
            enum Mode {RECT, POL};
        private:
            double x;
            double y;
            Mode mode;
            double get_mag() const;
            double get_ang() const;
        public:
            Vector() { }
            ~Vector() { }
            Vector(double n1, double n2, Mode form = RECT);
            void reset(double n1, double n2, Mode form = RECT);
            double xval() const { return x; }
            double yval() const { return y; }
            double magval() const { return get_mag(); }
            double angval() const { return get_ang(); }
            void rect_mode() { mode = RECT; }
            void polar_mode() { mode = POL; }
            Vector operator+(const Vector & b) const;
            Vector operator-(const Vector & b) const;
            Vector operator-() const { return Vector(-x, -y); }
            Vector operator*(double n) const;
            friend Vector operator*(double n, const Vector & a);
            friend std::ostream &
                operator<<(std::ostream & os, const Vector & v);
    };
}
#endif

