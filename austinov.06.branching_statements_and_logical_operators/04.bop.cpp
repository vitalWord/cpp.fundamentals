/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* When you join the Benevolent Order of Programmers (BOP), you can  */
/* be known at BOP meetings by your real name, your job title, or    */
/* your secret BOP name. Write a program that can list members by    */
/* real name, by job title, by secret name or by a mem-ber’s         */
/* preference. Base the program on the following structure:          */
/*                                                                   */
/* // Benevolent Order of Programmers name structure                 */
/* struct bop {                                                      */
/*     char fullname[strsize]; // real name                          */
/*     char title[strsize]; // job title                             */
/*     char bopname[strsize]; // secret BOP name                     */
/*     int preference; // 0 = fullname, 1 = title, 2 = bopname       */
/* };                                                                */
/*                                                                   */
/* In the program, create a small array of such structures and       */
/* initialize it to suitable values. Have the program run a loop     */
/* that lets the user select from different alternatives:            */
/* a. display by name    b. display by title                         */
/* c. display by bopname d. display by preference                    */
/* q. quit                                                           */
/*                                                                   */
/* Note that “display by preference” does not mean display the       */
/* preference member; it means display the member corresponding to   */
/* the preference number. For instance, if preference is 1, choice d */
/* would display the programmer’s job title.                         */
/*                                                                   */
/* A sample run may look something like the following:               */
/*                                                                   */
/* Benevolent Order of Programmers Report                            */
/* a. display by name    b. display by title                         */
/* c. display by bopname d. display by preference                    */
/* q. quit                                                           */
/* Enter your choice: a                                              */
/* Wimp Macho                                                        */
/* Raki Rhodes                                                       */
/* Celia Laiter                                                      */
/* Hoppy Hipman                                                      */
/* Pat Hand                                                          */
/* Next choice: d                                                    */
/* Wimp Macho                                                        */
/* Junior Programmer                                                 */
/* MIPS                                                              */
/* Analyst Trainee                                                   */
/* LOOPY                                                             */
/* Next choice: q                                                    */
/* Bye!                                                              */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>
# include <array>

/* Benevolent Order of Programmers name structure                    */
struct bop {
    char fullname[12];       /* real name                            */
    char title[12];          /* job title                            */
    char bopname[12];        /* secret BOP name                      */
    unsigned int preference; /* 0 = fullname, 1 = title, 2 = bopname */
};

enum {by_name, by_title, by_bop, by_pref};

void showmenu(void);
void display(const bop * p_member, unsigned int by);
void list(const bop p_array_of_bop[], unsigned int len, unsigned int by);

void showmenu()
{
    std::cout << "Benevolent Order of Programmers Report" << std::endl
              << "a. display by name    b. display by title" << std::endl
              << "c. display by bopname d. display by preference" << std::endl
              << "q. quit" << std::endl << "Enter your choice:";
}

void display(const bop * p_member, unsigned int by)
{
    switch (by)
    {
        case by_name:
            std::cout << p_member->fullname << std::endl;
            break;
        case by_title:
            std::cout << p_member->title << std::endl;
            break;
        case by_bop:
            std::cout << p_member->bopname << std::endl;
    };
}

void list(const bop p_array_of_bop[], unsigned int len, unsigned int by)
{
    bop member;
    for (unsigned int i = 0; i < len; i++)
    {
        member = p_array_of_bop[i];
        if (by == by_pref) 
            display(&member, member.preference);
        else
            display(&member, by);
    };
}


int main()
{
    const std::array<bop, 3> members = {
        {
            {"Real Name 0", "Job Title 0", "BOP Name 0", 0},
            {"Real Name 1", "Job Title 1", "BOP Name 1", 1},
            {"Real Name 2", "Job Title 2", "BOP Name 2", 2}
        }
    };

    char choice;
    unsigned int len = members.size();

    showmenu();

    std::cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
            case 'a' :
            case 'A' : list(members.data(), len, by_name);
                       break;
            case 'b' :
            case 'B' : list(members.data(), len, by_title);
                       break;
            case 'c' :
            case 'C' : list(members.data(), len, by_bop);
                       break;
            case 'd' :
            case 'D' : list(members.data(), len, by_pref);
                       break;

            default: std::cout << "No such option: " << choice;
        };
        std::cout << "\nNext Choice: ";
        std::cin >> choice;
    };

    return 0;
}

