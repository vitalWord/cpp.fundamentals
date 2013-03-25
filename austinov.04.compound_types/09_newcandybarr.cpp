// candybar.cpp declares the structure and populates an instance

# include <iostream>
# include <string>

int main()
{
    struct candybar {std::string n; float w; int c;};
    candybar * p_cba = new candybar[3];
    p_cba[0].n = "Candy Bar 0";
    p_cba[0].w = 0.9;
    p_cba[0].c = 210;
    std::cout << p_cba[0].n << ", " << p_cba[0].w << ", " << p_cba[0].c ;
    std::cout << std::endl;
    p_cba[1].n = "Candy Bar 1";
    p_cba[1].w = 1.9;
    p_cba[1].c = 321;
    std::cout << p_cba[1].n << ", " << p_cba[1].w << ", " << p_cba[1].c ;
    std::cout << std::endl;
    p_cba[2].n = "Candy Bar 2";
    p_cba[2].w = 2.9;
    p_cba[2].c = 432;
    std::cout << p_cba[2].n << ", " << p_cba[2].w << ", " << p_cba[2].c ;
    std::cout << std::endl;

    return 0;
};
