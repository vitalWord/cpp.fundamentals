/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a template function max5() that takes as its argument an    */
/* array of five items of type T and returns the largest item in the */
/* array. (Because the size is fixed it can be hard-coded into the   */
/* loop instead of being passed as an argument.) Test it in a        */
/* program that uses the function with an array of five int value    */
/* and an array of five double values.                               */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

const size_t MAX = 5;

template <typename T>
T max5(T arr[MAX])
{
    T max = 0;
    for (unsigned i = 0; i < MAX; i++) max = arr[i] > max ? arr[i] : max;
    return max;
}

int main()
{
    int ints[MAX] = {1, 2, 3, 4, 5};
    double doubles[MAX] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << max5(ints) << std::endl;
    std::cout << max5(doubles) << std::endl;
    return 0;
}

