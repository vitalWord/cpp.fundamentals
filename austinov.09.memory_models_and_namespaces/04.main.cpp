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

int main()
{

    SALES::Sales sls0;
    SALES::Sales sls1;

    SALES::setSales(sls0);

    const double arr1[] = {12.34, 56.78, 91.0, 11.12};
    SALES::setSales(sls1, arr1, 4);

    SALES::showSales(sls0);
    SALES::showSales(sls1);

    return 0;
}
