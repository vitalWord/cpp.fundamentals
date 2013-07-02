/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* A complex number has two parts: a real part and an imaginary part */
/* One way to write an imaginary number is this: (3.0,4.0). Here 3.0 */
/* is the real part and 4.0 is the imaginary part. Suppose a=(A,Bi)  */
/* and c = (C,Di). Here are some complex operations:                 */
/* * Addition: a + c = (A + C,(B + D)i)                              */
/* * Subtraction: a - c = (A - C,(B - D)i)                           */
/* * Multiplication: a × c = (A × C - B × D, (A × D + B × C)i)       */
/* * Multiplication: (x a real number): x × c = (x × C, x × Di)      */
/* * Conjugation: ~a = (A,- Bi)                                      */
/* Define a complex class so that the following program can use it   */
/* with correct results: see 07.main.cpp                             */
/*                                                                   */
/* Note that you have to overload the << and >> operators. Standard  */
/* C++ already has complex support, rather more extensive than in    */
/* this example — in a complex header file, so use complex0.h to     */
/* avoid conflicts. Use const whenever warranted. Here is a sample   */
/* run of the program:                                               */
/*                                                                   */
/* Enter a complex number (q to quit):                               */
/*     real:10                                                       */
/*     imaginary:12                                                  */
/*     c is (10,12i)                                                 */
/*     complex conjugate is (10,-12i)                                */
/*     a is (3,4i)                                                   */
/*     a + c is (13,16i)                                             */
/*     a - c is (-7,-8i)                                             */
/*     a * c is (-18,76i)                                            */
/*     2 * c is (20,24i)                                             */
/*     Enter a complex number (q to quit):                           */
/*     real:q                                                        */
/*     Done!                                                         */
/*                                                                   */
/* Note that cin >> c, through overloading, now prompts for real     */
/* and imaginary parts.                                              */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "07.cmplx.h"

Complex Complex::operator~() const
{
    return Complex(r, -i);
}

Complex Complex::operator+(const Complex & cn) const
{
    return Complex(r + cn.r, i + cn.i);
}

Complex Complex::operator-(const Complex & cn) const
{
    return Complex(r - cn.r, i - cn.i);
}

Complex Complex::operator*(const Complex & cn) const
{
    return Complex(r * cn.r - i * cn.i,
                   r * cn.i + i * cn.r);
}

Complex Complex::operator*(double n) const
{
    return Complex(r * n, i * n);
}

std::istream & operator>>(std::istream & istrm, Complex & cn)
{
    std::cout << "real: ";
    istrm >> cn.r;
    std::cout << "imaginary: ";
    istrm >> cn.i;
    return istrm;
}

std::ostream & operator<<(std::ostream & ostrm, const Complex & cn)
{
    ostrm << "(" << cn.r << ", " << cn.i << "i)";
    return ostrm;
}

