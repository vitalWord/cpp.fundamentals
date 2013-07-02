// bmi.cpp makes different conversions and calculates the BMI

#include <iostream>

int main()
{
    int h_ft = 0;
    int h_in = 0;
    int w_lbs = 0;

    std::cout << "This program wants to calculate your BMI" << std::endl;
    std::cout << "Please enter your height in feet and inches...";
    std::cout << std::endl << "Enter feet: ";
    std::cin >> h_ft;
    std::cout << "And inches: ";
    std::cin >> h_in;
    std::cout << "Please also enter your weight in pounds: ";
    std::cin >> w_lbs;

    // getting total height in inches
    h_in += h_ft / 12;

    // defining the multipliers for Height and Weight
    const float H_Mult = 0.0254;
    const float W_Mult = 2.2;

    // converting to meters and kilograms accordingly
    float h_m = H_Mult * h_in;
    float w_kg = W_Mult * w_lbs;

    std::cout << "The BMI is " << w_kg / (h_m * h_m) << std::endl;

    return 0;
}
