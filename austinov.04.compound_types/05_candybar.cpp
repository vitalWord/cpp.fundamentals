// candybar.cpp declares the structure and populates an instance

#include <iostream>
#include <string>

int main()
{
    struct candybar {std::string n; float w; int c;};
    candybar snack = {"Mocha Munch", 2.3, 350};
    std::cout << snack.n << ", " << snack.w << ", " << snack.c << std::endl;

    return 0;
};
