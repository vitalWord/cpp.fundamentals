// carcat.cpp makes a cars catalog and displays them

# include <iostream>
# include <string>
# include <array>

int main()
{
    int cars = 0;
    struct car {std::string make; int year;};
    std::cout << "How many cars do you want to catalog?";
    std::cin >> cars;
    car * catalog = new car[cars];
    for (int i = 0; i < cars; i++)
    {
         std::cout << "Car #" << i << std::endl;
         std::cout << "Please enter a make: ";
         std::cin >> catalog[i].make;
         std::cout << "Please enter the year made: ";
         std::cin >> catalog[i].year;
    };
    std::cout << "Here's your collection: " << std::endl;
    for (int i = 0; i < cars; i++)
    {
        std::cout << catalog[i].make << ' ' << catalog[i].year << std::endl;
    };
    delete [] catalog;
    return 0;
};
