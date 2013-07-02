/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Here is a structure declaration:                                  */
/*                                                                   */
/* structure box {                                                   */
/*     char maker[40];                                               */
/*     float height;                                                 */
/*     float width;                                                  */
/*     float length;                                                 */
/*     float volume;                                                 */
/* };                                                                */
/*                                                                   */
/* a. Write a function that passes a box structure by value and that */
/*    displays the value of each member.                             */
/*                                                                   */
/* b. Write a function that passes the address of a box structure    */
/*    and that sets the volume member to the product of the other    */
/*    three dimensions.                                              */
/*                                                                   */
/* c. Write a simple program that uses these two functions.          */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>

struct box { std::string maker;
    float h; float w; float l; float v;
};

box input(void);
void set_volume(box *);
void display(box);

box input()
{
    box inbox;
    std::cout << "Please specify the maker of your box: ";
    std::cin >> inbox.maker;
    std::cout << "Please enter H W L of your box: ";
    std::cin >> inbox.h >> inbox.w >> inbox.l;
    return inbox;
}

void set_volume(box * p_box)
{
    p_box->v = p_box->h * p_box->w * p_box->l;
}

void display(const box the_box)
{
    std::cout << "Maker: " << the_box.maker
              << ", height: " << the_box.h
              << ", width: " << the_box.w
              << ", length: " << the_box.l
              << ", volume: " << the_box.v << std::endl;
}


int main()
{
    box the_box = input();
    set_volume(&the_box);
    display(the_box);
    return 0;
}
