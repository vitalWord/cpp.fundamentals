/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a precursor to a menu-driven program. The program should    */
/* display a menu offering four choices, each labeled with a letter. */
/* If the user responds with a letter other than one of the four     */
/* valid choices, the program should prompt the user to enter a      */
/* valid response until the user complies. Then the program should   */
/* use a switch to select a simple action based on the user’s        */
/* selection. A program run could look something like this:          */
/*                                                                   */
/*    Please enter one of the following choices:                     */
/*    c) carnivore p) pianist                                        */
/*    t) tree g) game                                                */
/*    f                                                              */
/*    Please enter a c, p, t, or g: q                                */
/*    Please enter a c, p, t, or g: t                                */
/*    A maple is a tree.                                             */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

void showmenu(void);
void carnivore(void);
void pianist(void);
void tree(void);
void game(void);

void showmenu()
{
    std::cout << "Please enter one of the following choises:"
              << std::endl << "c) carnivore p) pianist"
              << std::endl << "t) tree g) game" << std::endl;
}

void carnivore()
{
    std::cout << "WTF the carnivore is???" << std::endl;
}

void pianist()
{
    std::cout << "Rakhmaninov was a pianist, wasn't he?" << std::endl;
}

void game()
{
    std::cout << "Super Mario is an epic game, am I right?" << std::endl;
}

void tree()
{
    std::cout << "Oak tree is the strongest one, agree?" << std::endl;
}


int main()
{
    bool repeat;
    char choice;

    showmenu();
    do {
        repeat = false;
        std::cin >> choice;

        switch (choice)
        {
            case 'c' :
            case 'C' : carnivore();
                       break;
            case 'p' :
            case 'P' : pianist();
                       break;
            case 'g' :
            case 'G' : game();
                       break;
            case 't' :
            case 'T' : tree();
                       break;

            default: repeat = true;
                std::cout << "\nPlease make a choice from 'c, p, g, t': ";
        };

    } while (repeat);

    return 0;
}

