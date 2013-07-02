/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a program that uses placement new to place an array of two  */
/* such structures in a buffer. Then assign values to the structure  */
/* members (remembering to use strcpy() for the char array) and use  */
/* a loop to display the contents. Option 1 is to use a static array */
/* like that in Listing 9.10, for the buffer. Option 2 is to use the */
/* regular new to allocate the buffer.                               */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>

struct chaff
{
    char dross[20];
    int slag;
};

char buffer[50];

int main()
{

    chaff * p_bufchaf2 = new (buffer) chaff[2];
    
    strcpy(p_bufchaf2[0].dross, "Chaff 0 dross 0");
    strcpy(p_bufchaf2[1].dross, "Chaff 1 dross 0");

    p_bufchaf2[0].slag = 42;
    p_bufchaf2[1].slag = 43;

    for (unsigned i = 0; i < 2; i++)
    {
        std::cout << p_bufchaf2[i].dross << ' '
                  << p_bufchaf2[i].slag << std::endl;
    };

    std::cout << "&buffer = " << &buffer << std::endl;
    std::cout << "p_bufchaf2 = " << p_bufchaf2 << std::endl;

    return 0;
}

