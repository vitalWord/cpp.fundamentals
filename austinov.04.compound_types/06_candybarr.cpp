// candybar.cpp declares the structure and populates an instance

#include <iostream>
#include <string>

int main()
{
    struct candybar {std::string n; float w; int c;};
    candybar cba [3];
    cba[0].n = "Candy Bar 0";
    cba[0].w = 0.9;
    cba[0].c = 210;
    std::cout << cba[0].n << ", " << cba[0].w << ", " << cba[0].c << std::endl;
    cba[1].n = "Candy Bar 1";
    cba[1].w = 1.9;
    cba[1].c = 321;
    std::cout << cba[1].n << ", " << cba[1].w << ", " << cba[1].c << std::endl;
    cba[2].n = "Candy Bar 2";
    cba[2].w = 2.9;
    cba[2].c = 432;
    std::cout << cba[2].n << ", " << cba[2].w << ", " << cba[2].c << std::endl;

    return 0;
};
