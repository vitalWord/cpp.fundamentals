// factorials.cpp calculate the first 16 factorials

# include <iostream>
# include <array>

const int ARR_LEN = 100;

int main()
{
    long double factorials[ARR_LEN];
    factorials[0] = 1;
    for ( int i = 1; i < ARR_LEN; i++ )
    {
        factorials[i] = i * factorials[i-1];
    }
    // std::cout << std::fixed;
    for ( int i = 0; i < ARR_LEN; i++ )
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }
    return 0;
};
