/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* The CandyBar structure contains three members. The first member   */
/* holds the brand name of a candy bar. The second member holds the  */
/* weight (which may have a fractional part) of the candy bar, and   */
/* the third member holds the number of calories (an integer value)  */
/* in the candy bar.                                                 */
/*                                                                   */
/* Write a program that uses a function that takes as arguments a    */
/* reference to CandyBar, a pointer-to-char, a double and an int     */
/* and uses the last three values to set the corresponding members   */
/* of the structure. The last three arguments should have default    */
/* values of “Millennium Munch”, 2.85, and 350.                      */
/*                                                                   */
/* Also the program should use a function that takes a reference to  */
/* a CandyBar as an argument and displays the contents of the        */
/* structure. Use const where appropriate.                           */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>

struct CandyBar
{
    std::string name;
    double weight;
    unsigned kcal;
};

void display(const CandyBar &);
void fill(CandyBar & cb, const char * name = "Millenium Munch",
          double weight = 2.85, unsigned kcal = 350);

void fill(CandyBar & cb, const char * name, double weight, unsigned kcal)
{
    cb.name = name;
    cb.weight = weight;
    cb.kcal = kcal;
}

void display(const CandyBar & cb)
{
    std::cout << "Brand name: " << cb.name
              << ", Weight: " << cb.weight
              << ", Calories: " << cb.kcal << std::endl;
}

int main()
{
    CandyBar cb;
    fill(cb);
    display(cb);
    fill(cb, "Olenka", 0.950, 222);
    display(cb);
    return 0;
}
