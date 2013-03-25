// intsum.cpp calculatest the sum between two integers specified

# include <iostream>

int main()
{
    int start, stop, sum = 0;
    std::cout << "Please enter the lower int: ";
    std::cin >> start;
    std::cout << "Please specify the higher one: ";
    std::cin >> stop;
    for ( int i = start; i <= stop; i++ )
    {
        sum += i;
    }
    std::cout << "The sum of ints from " << start << " to " << stop;
    std::cout << " is " << sum << std::endl;
    
    return 0;
};
