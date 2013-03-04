// fourlines.cpp produces four lines using three functions

#include <iostream>

void first(void)
{
    std::cout << "Three blind mice" << std::endl;
}

void second(void)
{
    std::cout << "See how they run" << std::endl;
}
    
int main(void)
{
    first();
    first();
    second();
    second();
    return 0;
}
