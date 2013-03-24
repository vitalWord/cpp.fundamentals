// pizza.cpp uses new to allocate the structure

# include <iostream>
# include <string>

int main()
{
    struct pizza_company {std::string name; int d; float w;};
    pizza_company* p_pizza = new pizza_company;
    std::cout << "Please specify a company: ";
    getline(std::cin, p_pizza->name);
    std::cout << "Please enter the diameter in mm: ";
    std::cin >> p_pizza->d;
    std::cout << "Please specify weight in kg: ";
    std::cin >> p_pizza->w;
    std::cout << std::endl << "You have entered: ";
    std::cout << p_pizza->name << ", " << p_pizza->d << ", " << p_pizza->w;
    std::cout << std::endl;

    return 0;
}
