/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a program that uses the following functions:                */
/*                                                                   */
/* fill_array() takes as arguments the name of an array of double    */
/* values and an array size. It prompts the user to enter double     */
/* values to be entered in the array. It ceases taking input when    */
/* the array is full or when the user enters non-numeric input, and  */
/* it returns the actual number of entries.                          */
/*                                                                   */
/* show_array() takes as arguments the name of an array of double    */
/* values and an array size and displays the contents of the array.  */
/*                                                                   */
/* reverse_array() takes as arguments the name of an array of double */
/* values and an array size and reverses the order of the values     */
/* stored in the array.                                              */
/*                                                                   */
/* The program should use these functions to fill an array, show the */
/* array, reverse the array, show the array, reverse all but the     */
/* first and last elements of the array, and then show the array.    */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

unsigned fill_array(double [], unsigned);
void show_array(const double [], unsigned);
void reverse_array(double [], unsigned);

const unsigned MAX_SZ = 20;

unsigned fill_array(double ar[], unsigned sz)
{
    unsigned i = 0;
    std::cout << "Please enter up to " << sz << " array members: ";
    while (std::cin >> ar[i] && i < sz) i++;
    return i < sz ? i : sz;
}

void show_array(const double ar[], unsigned sz)
{
    for (unsigned i = 0; i < sz; i++) std::cout << " " << ar[i];
}

void reverse_array(double ar[], unsigned sz)
{
    double tmp = 0.0;
    for (unsigned i = 0; i < sz / 2 + sz % 2; i++) {
         tmp = ar[i];
         ar[i] = ar[sz - i - 1];
         ar[sz - i - 1] = tmp;
    };
}

int main()
{
    double arr_of_dbl[MAX_SZ];
    unsigned size = fill_array(arr_of_dbl, MAX_SZ);

    show_array(arr_of_dbl, size);
    std::cout << std::endl;

    reverse_array(arr_of_dbl, size);
    show_array(arr_of_dbl, size);

    std::cout << std::endl;
    return 0;
}

