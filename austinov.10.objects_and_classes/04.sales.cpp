/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Do Exercise 4 from Chapter 9 but convert the Sales structure and  */
/* its associated functions to a class and its methods. Replace the  */
/* setSales(Sales &, double [], int) function with a constructor.    */
/* Implement the interactive setSales(Sales &) method by using the   */
/* constructor. Keep the class within the namespace SALES.           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "04.sales.h"

namespace SALES
{
    Sales::Sales(const double ar[], int n = QUARTERS)
    {
        double mx = ar[0];
        double mn = ar[0];
        double t = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > mx) mx = ar[i];
            if (ar[i] < mn) mn = ar[i];
            t += (sales[i] = ar[i]);
        };
        if (n < QUARTERS)
            for (int i = n; i < QUARTERS; i++) sales[i] = 0.0;
        average = t / n;
        max = mx;
        min = mn;
    }

    Sales::Sales()
    {
        int len = QUARTERS;
        double arr[QUARTERS];
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Sales for quarter " << 1 + i << ": ";
            if (!(std::cin >> arr[i]))
            {
                len = i;
                break;
            };
        };
        *this = Sales(arr, (QUARTERS == len) ? QUARTERS : len);
    }

    void Sales::show() const
    {
        std::cout << "Quarterly Sales:" << std::flush;
        for (unsigned i = 0; i < QUARTERS; i++)
            std::cout << (0 == i ? " " : ", ") << sales[i] << std::flush;
        std::cout << std::endl << "Average: " << average
                               << ", Max: " << max
                               << ", Min: " << min << std::endl;
    }
}
