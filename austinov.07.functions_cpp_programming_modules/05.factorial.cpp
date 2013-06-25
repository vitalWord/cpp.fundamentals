/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*    Define a recursive function that takes an integer argument     */
/*    and returns the factorial of that argument.                    */
/*                                                                   */
/*    Recall that 3 factorial, written 3!, equals 3 * 2!,            */
/*    and so on, with 0! defined as 1.                               */
/*                                                                   */
/*    In general, if n is greater than zero, n! = n * (n - 1)!.      */
/*                                                                   */
/*    Test your function in a program that uses a loop to allow      */
/*    the user to enter various values for which the program         */
/*    reports the factorial.                                         */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

long double f(unsigned);
long double f(unsigned n) { return 0 == n ? 1 : f(n - 1) * n; }

int main()
{
    unsigned n;
    std::cout << "Calculate Factorial (q to quit).\nPlease enter the n: ";
    while(std::cin >> n) std::cout << n << "! is " << f(n) << std::endl
                                   << "Enter another n (q to exit): ";
    return 0;
}

