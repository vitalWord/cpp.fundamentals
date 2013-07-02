/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Do Programming Exercise 6 but modify it to get information from a */
/* file. The first item in the file should be the number of          */
/* contributors, and the rest of the file should consist of pairs of */
/* lines, with the first line of each pair being a contributor’s     */
/* name and the second line being a contribution. That is, the file  */
/* should look like this:                                            */
/*                                                                   */
/* 4                                                                 */
/* Sam Stone                                                         */
/* 2000                                                              */
/* Freida Flass                                                      */
/* 100500                                                            */
/* Tammy Tubbs                                                       */
/* 5000                                                              */
/* Rich Raptor                                                       */
/* 55000                                                             */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <fstream>
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

    std::ifstream configfile;
    configfile.open("patrons.cfg");
    configfile >> ar_sz;
    //std::cout << "ar_sz" << ar_sz;

    T_P2Donor * p_donors = new T_P2Donor[ar_sz];

    for (unsigned int i = 0; i < ar_sz; i++)
    {
        // this is very important for making the getline read properly
        configfile.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(configfile, var_name);
        configfile >> var_donation ;
        //std::cout << "name" << var_name << "donation" << var_donation;

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

