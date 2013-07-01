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

int main()
{

    SALES::Sales sls0;

    const double arr1[] = {12.34, 56.78, 91.0, 11.12};
    SALES::Sales sls1(arr1, 4);

    sls0.show();
    sls1.show();

    return 0;
}
