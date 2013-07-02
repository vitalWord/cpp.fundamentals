// 40yddash.cpp asks for the sprint times and shows the average

# include <iostream>
# include <array>

int main()
{
    std::array<float, 3> lap_times;
    float time_sum = 0.0;
    for (int i = 0; (i < lap_times.max_size()); i++)
    {
        std::cout << "Please enter the result in seconds: ";
        std::cin >> lap_times[i];
        time_sum += lap_times[i];
    };
    std::cout << "The average time is: " << time_sum / lap_times.size();
    std::cout << std::endl;
        
    return 0;
};
