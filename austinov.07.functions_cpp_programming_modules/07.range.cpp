/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Redo Listing 7.7, modifying the three array-handling functions to */
/* each use two pointer parameters to represent a range.             */
/*                                                                   */
/* The fill_array() function, instead of returning the actual number */
/* of items read, should return a pointer to the location after the  */
/* last location filled; the other functions can use this pointer as */
/* the second argument to identify the end of the data.              */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

const unsigned Max = 5;
double * fill_array(double [], unsigned);
void show_array(const double [], const double *);
void revalue(double, double [], const double *);

double * fill_array(double ar[], unsigned limit)
{
    unsigned i;
    double * pt = ar;
    double temp;
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!std::cin) // bad input
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
       } else
           if (temp < 0)
               break;
       ar[i] = temp;
    };
    return pt + i;
}

void show_array(const double ar[], const double * pt)
{
    for (unsigned i = 0; ar + i < pt; i++)
    {
        std::cout << "Property #" << (i + 1) << ": $" << ar[i] << std::endl;
    };
}

void revalue(double r, double ar[], const double * pt)
{
    for (int i = 0; ar + i < pt; i++) ar[i] *= r;
}

int main()
{
    double properties[Max];

    double * end_pt = fill_array(properties, Max);
    show_array(properties, end_pt);

    if (end_pt > properties)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor)) // bad input
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";
        };
        revalue(factor, properties, end_pt);
        show_array(properties, end_pt);
    };
    std::cout << "Done.\n";
    std::cin.get();
    std::cin.get();

    return 0;
}
