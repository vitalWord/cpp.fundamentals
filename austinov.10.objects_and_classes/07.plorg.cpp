/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*  Betelgeusean plorg has these properties:                         */
/*                                                                   */
/*  Data                                                             */
/*  A plorg has a name with no more than 19 letters.                 */
/*  A plorg has a contentment index (CI),which is an integer.        */
/*                                                                   */
/*  Operations                                                       */
/*  A new plorg starts out with a name and a CI of 50.               */
/*  A plorg’s CI can change.                                         */
/*  A plorg can report its name and CI.                              */
/*  The default plorg has the name "Plorga".                         */
/*                                                                   */
/*  Write a Plorg class declaration (including data members and      */
/*  member function prototypes) that represents a plorg. Write the   */
/*  function definitions for the member functions. Write a short     */
/*  program that demonstrates all the features of the Plorg class.   */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>

class Plorg
{
    private:
        std::string name;
        int ci;

    public:
        Plorg(std::string = "Plorga", int i = 50);
        void set_ci(int ci);
        void report(void);
};

Plorg::Plorg(std::string n, int c)
{
    name = n;
    ci = c;
}

void Plorg::set_ci(int c)
{
    ci = c;
}

void Plorg::report(void)
{
    std::cout << "Name: " << name << ", CI: " << ci << std::endl;
}

int main()
{
    Plorg one;
    one.report();

    Plorg another_one("Another Plorg", 42);
    another_one.report();

    one.set_ci(100500);
    one.report();

    return 0;
}

