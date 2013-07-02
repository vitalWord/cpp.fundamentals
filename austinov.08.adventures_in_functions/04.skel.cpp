/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* The following is a program skeleton:                              */
/*                                                                   */
/* #include <iostream>                                               */
/* using namespace std;                                              */
/* #include <cstring> // for strlen(), strcpy()                      */
/* struct stringy {                                                  */
/*     char * str; // points to a string                             */
/*     int ct; // length of string (not counting '\0')               */
/* };                                                                */
/* // prototypes for set(), show(), and show() go here               */
/* int main()                                                        */
/* {                                                                 */
/*     stringy beany;                                                */
/*     char testing[] = "Reality isn't what it used to be.";         */
/*     set(beany, testing); // first argument is a reference,        */
/*     // allocates space to hold copy of testing,                   */
/*     // sets str member of beany to point to the                   */
/*     // new block, copies testing to new block,                    */
/*     // and sets ct member of beany                                */
/*     show(beany); // prints member string once                     */
/*     show(beany, 2); //prints member string twice                  */
/*     testing[0] = 'D';                                             */
/*     testing[1] = 'u';                                             */
/*     show(testing); // prints testing string once                  */
/*     show(testing, 3); // prints testing string thrice             */
/*     show("Done!");                                                */
/*     return 0;                                                     */
/* }                                                                 */
/*                                                                   */
/* Complete this skeleton by providing the described functions and   */
/* prototypes. Note that there should be two show() functions, each  */
/* using default arguments. Use const arguments when appropriate.    */
/* Note that set() should use new to allocate sufficient space to    */
/* hold the designated string. The techniques used here are similar  */
/* to those used in designing and implementing classes. (You might   */
/* have to alter the header filenames and delete the using directive */
/* depending on your compiler.)                                      */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <cstring> // for strlen(), strcpy()

struct stringy {
    char * str; // points to a string
    int ct; // length of string (not counting '\0')
};

// prototypes for set(), show(), and show() go here
void set(stringy &, const char *);
void show(const stringy &, unsigned n = 1);
void show(const char *, unsigned n = 1);

void set(stringy & stringy_ref, const char * content)
{
    stringy_ref.ct = strlen(content);
    stringy_ref.str = new char[stringy_ref.ct + 1];
    strcpy(stringy_ref.str, content);
}

void show(const stringy & stringy_ref, unsigned n)
{
    for (unsigned i = 0; i < n; i++) std::cout << stringy_ref.str << std::endl;
}

void show(const char * p2ch, unsigned n)
{
    for (unsigned i = 0; i < n; i++) std::cout << p2ch << std::endl; 
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing); /*
    // first argument is a reference,
    // allocates space to hold copy of testing,
    // sets str member of beany to point to the
    // new block, copies testing to new block,
    // and sets ct member of beany
    */
    show(beany); // prints member string once
    show(beany, 2); //prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing); // prints testing string once
    show(testing, 3); // prints testing string thrice
    show("Done!");
    delete beany.str;
    return 0;
}

