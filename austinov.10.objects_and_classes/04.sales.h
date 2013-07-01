/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Do Exercise 4 from Chapter 9 but convert the Sales structure and  */
/* its associated functions to a class and its methods. Replace the  */
/* setSales(Sales &, double [], int) function with a constructor.    */
/* Implement the interactive setSales(Sales &) method by using the   */
/* constructor. Keep the class within the namespace SALES.           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>

namespace SALES
{
    const int QUARTERS = 4;

    class Sales
    {
        private:
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        public:
            Sales(); 
            Sales(const double ar[], int n);
            void show() const;
    };
}

