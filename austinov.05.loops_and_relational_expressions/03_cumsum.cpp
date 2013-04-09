// cumsum.cpp asks you to enter the nums and calculates the sum to date

# include <iostream>

int main()
{
    int n = 0;
    long sum = 0;
    do {
        std::cout << "Please enter the integer: ";
        std::cin >> n;
        std::cout << "The sum of entred numbers is: " << (sum += n);
        std::cout << std::endl << std::endl;
    } while (n != 0);
    return 0;
};
