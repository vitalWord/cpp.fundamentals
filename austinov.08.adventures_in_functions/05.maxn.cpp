/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a template function maxn() that takes as its arguments an   */
/* array of items of type T and an integer representing the number   */
/* of elements in the array and that returns the largest item in the */
/* array. Test it in a program that uses the function template with  */
/* an array of six int value and an array of four double values. The */
/* program should also include a specialization that takes an array  */
/* of pointers-to-char as an argument and the number of pointers as  */
/* a second argument and that returns the address of the longest     */
/* string. If multiple strings are tied for having the longest       */
/* length, the function should return the address of the first one   */
/* tied for longest. Test the specialization with an array of five   */
/* string pointers.                                                  */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

template <typename T>
T max_n(T arr[], unsigned n)
{
    T max = 0;
    for (unsigned i = 0; i < n; i++) max = arr[i] > max ? arr[i] : max;
    return max;
}

template <> char * max_n<char *>(char * arr[], unsigned n)
{
    char * pmax = arr[0];
    for (unsigned i = 0; i < n; i++)
        pmax = strlen(arr[i]) > strlen(pmax) ? arr[i] : pmax;
    return pmax;
}

int main()
{
    int ints[] = {1, 2, 3, 4, 5, 6};
    double doubles[] = {1.1, 2.2, 3.3, 4.4};
    char * chars[] = {"One", "Two", "Three", "Four", "Five"};
    std::cout << max_n(ints, 6) << std::endl;
    std::cout << max_n(doubles, 4) << std::endl;
    std::cout << max_n(chars, 5) << std::endl;
    return 0;
}

