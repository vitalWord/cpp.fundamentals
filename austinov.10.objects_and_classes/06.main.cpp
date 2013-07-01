/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*     Here’s a class declaration: "06.move.h"                       */
/*                                                                   */
/*     Create member function definitions and                        */
/*     a program that exercises the class.                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "06.move.h"

int main()
{

    Move one(1.1, 1.2);
    one.showmove();

    Move two(2.1, 2.2);
    two.showmove();

    Move three = one.add(two);
    three.showmove();

    one.reset();
    one.showmove();

    return 0;
}

