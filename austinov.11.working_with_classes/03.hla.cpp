/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Modify Listing 11.15 so that instead of reporting the results of  */
/* a single trial for a particular target/step combination, it       */
/* reports the highest, lowest and average number of steps for N     */
/* trials, where N is an integer entered by the user.                */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "02.vect.h"

int main()
{
    std::srand(std::time(0));
    double direction;
    VECTOR::Vector step;
    VECTOR::Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long lowest = 0;
    unsigned long highest = 0;
    unsigned long total_steps = 0;
    double target;
    double dstep;
    unsigned n = 0;
    unsigned trials = 0;
    std::cout << "Enter the number of trials: ";
    std::cin >> n;
    std::cout << "Enter target distance (q to quit): ";
    while (std::cin >> target)
    {
        std::cout << "Enter step length: ";
        if (!(std::cin >> dstep))
            break;
        while (result.magval() < target) {
            direction = std::rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            result = result + step;
            steps++;
        };
        if (steps > highest)
            highest = steps;
        if (steps < lowest || 0 == trials)
            lowest = steps;
        total_steps += steps;
        if (++trials >= n)
            break;
        steps = 0;
        result.reset(0.0, 0.0);
        std::cout << "Enter target distance (q to quit): ";
    };
    std::cout << "Trials made: " << trials << std::endl;
    std::cout << "Highest steps number: " << highest << std::endl;
    std::cout << "Lowest steps number: " << lowest << std::endl;
    std::cout << "Average step number: " << total_steps / trials;
    std::cout << std::endl << "Bye!" << std::endl;;
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;
    return 0;
}

