/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* A complex number has two parts: a real part and an imaginary part */
/* One way to write an imaginary number is this: (3.0,4.0). Here 3.0 */
/* is the real part and 4.0 is the imaginary part. Suppose a=(A,Bi)  */
/* and c = (C,Di). Here are some complex operations:                 */
/* * Addition: a + c = (A + C,(B + D)i)                              */
/* * Subtraction: a - c = (A - C,(B - D)i)                           */
/* * Multiplication: a ×c = (A ×C - B×D,(A×D + B×C)i)                */
/* * Multiplication: (x a real number):x ×c = (x×C,x×Di)             */
/* * Conjugation: ~a = (A,- Bi)                                      */
/* Define a complex class so that the following program can use it   */
/* with correct results:                                             */

#include "07.cmplx.h" // to avoid confusion with complex.h

int main()
{
    Complex a(3.0, 4.0); // initialize to (3,4i)
    Complex c;
    std::cout << "Enter a complex number (q to quit):" << std::endl;
    while (std::cin >> c)
    {
        std::cout << "c is " << c << std::endl;
        std::cout << "complex conjugate is " << ~c << std::endl;
        std::cout << "a is " << a << std::endl;
        std::cout << "a + c is " << a + c << std::endl;
        std::cout << "a - c is " << a - c << std::endl;
        std::cout << "a * c is " << a * c << std::endl;
        std::cout << "2 * c is " << 2 * c << std::endl;
        std::cout << "Enter a complex number (q to quit):" << std::endl;
    }
    std::cout << "Done!" << std::endl;
    return 0;
}

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
/* Note that cin >> c, through overloading, now prompts for real and */
/* imaginary parts.                                                  */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
