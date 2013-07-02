// pizza.cpp introduces a pizzacompany structure and populates one instance

# include <iostream>
# include <string>

int main()
{
    struct pizza_company {std::string name; int d; float w;} pizza;
    std::cout << "Please specify a company: ";
    getline(std::cin, pizza.name);
    std::cout << "Please enter the diameter in mm: ";
    std::cin >> pizza.d;
    std::cout << "Please specify weight in kg: ";
    std::cin >> pizza.w;
    std::cout << std::endl << "You have entered: ";
    std::cout << pizza.name << ", " << pizza.d << ", " << pizza.w << std::endl;

    return 0;
}
