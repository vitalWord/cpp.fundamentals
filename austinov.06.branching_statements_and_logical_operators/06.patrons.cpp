/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Put together a program that keeps track of monetary contributions */
/* to the Society for the Preservation of Rightful Influence.        */
/*                                                                   */
/* It should ask the user to enter the number of contributors and    */
/* then solicit the user to enter the name and contribution of each  */
/* contributor.                                                      */
/*                                                                   */
/* The information should be stored in a dynamically allocated array */
/* of structures. Each structure should have two members:a character */
/* array (or else a string object) to store the name and a double    */
/* member to hold the amount of the contribution. After reading all  */
/* the data, the program should display the names and amounts        */
/* donated for all donors who contributed $10,000 or more. This list */
/* should be headed by the label Grand Patrons. After that, the      */
/* program should list the remaining donors. That list should be     */
/* headed Patrons. If there are no donors in one of the categories,  */
/* the program should print the word “none.” Aside from displaying   */
/* two categories, the program need do no sorting.                   */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <sstream>
# include <string>

struct Donor {
    std::string name;
    double donation;
};

typedef Donor * T_P2Donor;

void show_donor(T_P2Donor contributor);

void show_donor(T_P2Donor contributor)
{
    std::cout << contributor->name << ' '
              << contributor->donation << std::endl;
}

int main()
{

    size_t ar_sz = 0;
    std::string var_name;
    double var_donation = 0;

    std::cout << "Please enter the number of contributors: ";
    std::cin >> ar_sz;

    T_P2Donor * p_donors = new T_P2Donor[ar_sz];

    for (unsigned int i = 0; i < ar_sz; i++)
    {
        std::cout << std::endl << "Please enter the name: ";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin, var_name);

        std::cout << std::endl << "Please enter the amount of donation: ";
        std::cin >> var_donation ;

        p_donors[i] = new Donor;
        p_donors[i]->name = var_name;
        p_donors[i]->donation = var_donation;

    };

    for (unsigned int grp = 0; grp < 2; grp++)
    {
        std::cout << std::endl
                  << ((0 == grp) ? "Grand Patrons" : "Patrons")
                  << std::endl;
        for (unsigned int i = 0; i < ar_sz; i++)
        {
            if (0 == grp && p_donors[i]->donation > 9999)
                show_donor(p_donors[i]);
            else
                if (1 == grp)
                {
                    if (p_donors[i]->donation < 10000)
                        show_donor(p_donors[i]);
                    // free memory on the second turn
                    delete p_donors[i];
                };
        };
    };
    std::cout << std::endl;

    delete [] p_donors;

    return 0;
}

