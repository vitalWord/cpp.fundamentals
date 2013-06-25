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
static const char* Snames[] = {"Spring", "Summer", "Fall", "Winter"};


void fill(double (* )[SS]);
void show(double []);

void fill(double (* p_to_a_of_d)[SS])
{
    for (unsigned i = 0; i < SS; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> (*p_to_a_of_d)[i];
    };
}

void show(double da[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < SS; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    };
    std::cout << "Total Expenses: $" << total << std::endl;
}

int main()
{
    double expenses[SS];

    fill(&expenses);
    show(expenses);

    return 0;
}

