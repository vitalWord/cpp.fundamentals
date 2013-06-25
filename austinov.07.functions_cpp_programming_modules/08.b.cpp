/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Redo Listing 7.15 without using the arrayclass. Do two versions:  */
/*                                                                   */
/*     a. Use an ordinary array of const char * for the strings      */
/* representing the season names, and use an ordinary array of       */
/* double for the expenses.                                          */
/*                                                                   */
/*     b. Use an ordinary array of const char * for the strings      */
/* representing the season names, and use a structure whose sole     */
/* member is an ordinary array of double for the expenses.           */
/* (This design is similar to the basic design of the array class.)  */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

const int SS = 4;
const char * Snames[] = {"Spring", "Summer", "Fall", "Winter"};

struct exp_struct { double data[SS]; };

void fill(exp_struct *);
void show(exp_struct);

void fill(exp_struct * p_exps)
{
    for (unsigned i = 0; i < SS; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> p_exps->data[i];
    };
}

void show(exp_struct exps)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SS; i++)
    {
        std::cout << Snames[i] << ": $" << exps.data[i] << std::endl;
        total += exps.data[i];
    };
    std::cout << "Total Expenses: $" << total << std::endl;
}

int main()
{
    exp_struct expenses;

    fill(&expenses);
    show(expenses);

    return 0;
}

