/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a three-file program based on the namespace from sales.h:   */
/*                                                                   */
/*       The first file should be a header file that contains the    */
/*   namespace. The second file should be a source code file that    */
/*   extends the namespace to provide definitions for the three      */
/*   prototyped functions. The third file should declare two Sales   */
/*   objects. It should use the interactive version of setSales()    */
/*   to provide values for one structure and the non-interactive     */
/*   version of setSales() to provide values for the second          */
/*   structure. It should display the contents of both structures    */
/*   by using showSales().                                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "04.sales.h"

namespace SALES
{
    void setSales(Sales & s, const double ar[], int n = QUARTERS)
    {
        double max = ar[0];
        double min = ar[0];
        double tot = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > max) max = ar[i];
            if (ar[i] < min) min = ar[i];
            tot += (s.sales[i] = ar[i]);
        };
        if (n < QUARTERS)
            for (int i = n; i < QUARTERS; i++) s.sales[i] = 0.0;
        s.average = tot / n;
        s.max = max;
        s.min = min;
    }

    void setSales(Sales & s)
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
        setSales(s, arr, (QUARTERS == len) ? QUARTERS : len);
    }

    void showSales(const Sales & s)
    {
        std::cout << "Quarterly Sales:" << std::flush;
        for (unsigned i = 0; i < QUARTERS; i++)
            std::cout << (0 == i ? " " : ", ") << s.sales[i] << std::flush;
        std::cout << std::endl << "Average: " << s.average
                               << ", Max: " << s.max
                               << ", Min: " << s.min << std::endl;
    }
}
