// sales.cpp counts the yearly worth from monthly sales

# include <iostream>
# include <string>
# include <array>

int main()
{
    const std::array<std::string, 12> Months = {"Jan", "Feb", "Mar", "Apr",
                                                "May", "Jun", "Jul", "Aug",
                                                "Sep", "Oct", "Nov", "Dec"};
    std::array<int, 12> sales;
    int yearly_sales = 0;

    for (int i = 0; i < Months.size(); i++) {
        std::cout << "Please enter the sales for " << Months[i] << std::endl;
        std::cin >> sales[i];
        yearly_sales += sales[i];
    };

    std::cout << "Yearly sales worth " << yearly_sales << " pcs." << std::endl;
    return 0;
};
