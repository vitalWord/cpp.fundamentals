// invest.cpp compares the simple and compound investments

# include <iostream>

int main()
{
    double bal0, bal1;
    bal0 = bal1 = 100;
    int years = 0;
    do {
        bal0 += 0.1 * 100;
        bal1 += 0.05 * bal1;
        years++;
    } while (bal0 > bal1);
    std::cout << "It took " << years << " years so that ";
    std::cout << bal1 << " is now more than " << bal0 << std::endl;
    return 0;
};
