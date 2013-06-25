/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*  Write a program that repeatedly asks the user to enter pairs of  */
/*  numbers until at least one of the pair is 0. For each pair, the  */
/*  program should use a function to calculate the harmonic mean of  */
/*  the numbers. The function should return the answer to main(),    */
/*  which should report the result. The harmonic mean of the numbers */
/*  is the inverse of the average of the inverses and can be         */
/*  calculated as follows:                                           */
/*                                                                   */
/*      harmonic mean = 2.0 * x * y / (x + y)                        */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

double hmean(double, double);

double hmean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}

int main()
{
    double x, y;
    std::cout << "Please enter a pair of numbers: ";
    while ((std::cin >> x >> y) && !(0.0 == x || 0.0 == y))
    {
        std::cout << "The harmonic mean is " << hmean(x, y);
        std::cout << std::endl << "Please enter a pair of numbers: ";
    };

    return 0;
}
