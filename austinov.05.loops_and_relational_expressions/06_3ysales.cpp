// sales.cpp counts the yearly worth from monthly sales

# include <iostream>
# include <string>
# include <array>

int main()
{
    int total_sales = 0;
    const std::array<std::string, 12> Months = {"Jan", "Feb", "Mar", "Apr",
                                                "May", "Jun", "Jul", "Aug",
                                                "Sep", "Oct", "Nov", "Dec"};
    std::array<std::array<int, 12>, 3> sales;
    for (int y = 0; y < sales.size(); y++) {
        int yearly_sales = 0;
        for (int i = 0; i < Months.size(); i++) {
            std::cout << "Please enter the sales for " << Months[i];
            std::cout << " of year " << (y + 1) << std::endl;
            std::cin >> sales[y][i];
            yearly_sales += sales[y][i];
        };
        std::cout << "Yearly sales for year " << y << " worth " << yearly_sales;
        std::cout << " pcs." << std::endl;
        total_sales += yearly_sales;
    };

    std::cout << "Total sales worth " << total_sales << " pcs." << std::endl;
    return 0;
};
