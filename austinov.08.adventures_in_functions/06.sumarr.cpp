/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Modify Listing 8.14 so that it uses two template functions called */
/* SumArray() to return the sum of the array contents instead of     */
/* displaying the contents.The pro-gram now should report the total  */
/* number of things and the sum of all the debts.                    */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

template <typename T> void SumArray(T arr[], int n);
template <typename T> void SumArray(T * arr[], int n);

struct debts {char name[50]; double amount;};

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

template <typename T> void SumArray(T arr[], int n)
{
    T sum = 0;
    std::cout << "template A\nSum: ";
    for (int i = 0; i < n; i++) sum += arr[i];
    std::cout << sum << std::endl;
}

template <typename T> void SumArray(T * arr[], int n)
{
    T sum = 0;
    std::cout << "template B\nSum: ";
    for (int i = 0; i < n; i++) sum += *arr[i];
    std::cout << sum << std::endl;
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

int main()
{
    int things[6] = {13, 31, 103, 301, 310, 130};

    struct debts mr_E[3] =
    {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };

    double * pd[3];
    for (int i = 0; i < 3; i++) pd[i] = &mr_E[i].amount;

    std::cout << "Listing Mr. E's total number of things:\n";
    SumArray(things, 6);  // uses template A

    std::cout << "Listing Mr. E's debts sum:\n";
    SumArray(pd, 3);  // uses template B (more specialized)

    return 0;
}

