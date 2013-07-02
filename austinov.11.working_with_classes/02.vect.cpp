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

#include <cmath>
#include "02.vect.h"

namespace VECTOR
{
    const double R2D = 45.0 / std::atan(1.0);

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == POL)
        {
            x = n1 * std::cos(n2 / R2D);
            y = n1 * std::sin(n2 / R2D);
        }
        else
        {
            std::cout << "Incorrect 3rd argument to Vector() -- "
                      << "vector set to 0" << std::endl;
            x = y = 0.0;
            mode = RECT;
        }
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
        }
        else if (form == POL)
        {
            x = n1 * std::cos(n2 / R2D);
            y = n1 * std::sin(n2 / R2D);
        }
        else
        {
            std::cout << "Incorrect 3rd argument to Vector() -- "
                      << "vector set to 0" << std::endl;
            x = y = 0.0;
            mode = RECT;
        }
    }

    double Vector::get_mag() const
    {
        return std::sqrt(x * x + y * y);
    }

    double Vector::get_ang() const
    {
        return bool(x) || bool(y) ? std::atan2(y, x) : 0.0;
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x + b.x, y + b.y);
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x - b.x, y - b.y);
    }

    Vector Vector::operator*(double n) const
    {
        return Vector(n * x, n * y);
    }

    Vector operator*(double n, const Vector & a)
    {
        return a * n;
    }

    std::ostream & operator<<(std::ostream & os, const Vector & v)
    {
        if (v.mode == Vector::RECT)
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
            os << "(m,a) = (" << v.get_mag() << ", "
                              << v.get_ang() * R2D << ")";
        else
            os << "Vector object mode is invalid";
        return os;
    }
}

