/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*     Here’s a class declaration: "06.move.h"                       */
/*                                                                   */
/*     Create member function definitions and                        */
/*     a program that exercises the class.                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "06.move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "x = " << x << "; y = " << y << std::endl;
}

Move Move::add(const Move & m) const
{
    return Move(x + m.x, y + m.y);
}

