/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a program that reads up to 10 donation values into an array */
/* of double. (Or, if you prefer, use an array template object.) The */
/* program should terminate input on non-numeric input.              */
/* It should report the average of the numbers and also report how   */
/* many numbers in the array are larger than the average.            */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <cctype>
# include <array>

int main()
{
    double sum = 0;
    double average = 0;
    double element = 0;
    unsigned long i = 0;
    // the initialization below may be not compatible with C++98
    std::array<double, 10> donations {};

    std::cout << "Please enter up to 10 donations:" << std::endl;;
    for (i = 0; i < donations.max_size(); i++) {
        if (!(std::cin >> element)) {
            std::cout << "Non-numeric entered. Terminating input.\n";
            break;
        };
        donations[i] = element;
        sum += element;
    };

    if (i > 0) 
    {
        average = sum / donations.size();
        std::cout << "The average donation is " << average << std::endl;
        for (i = 0; i < donations.size(); i++) {
            if (donations[i] > average)
                std::cout << "\nDonation " << donations[i] << " > average";
        };
    } else std::cout << "Program requires at least one donation.";
    std::cout << std::endl;

    return 0;
}

