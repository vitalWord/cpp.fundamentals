/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a program that asks the user to enter up to 10 golf scores, */
/* which are to be stored in an array. You should provide a means    */
/* for the user to terminate input prior to entering 10 scores.      */
/* The program should display all the scores on one line and report  */
/* the average score. Handle input, display and the average          */
/* calculation with three separate array-processing functions.       */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

const unsigned int MAX_SIZE = 10;

unsigned int input(int []);
void display(const int [], unsigned int);
double average(const int [], unsigned int);

unsigned int
input(int arr[])
{
    unsigned int i = 0;
    std::cout << "Please enter up to " << MAX_SIZE << " golf scores: ";
    while (std::cin >> arr[i] && i < MAX_SIZE) i++;
    return i;
}

void display(const int arr[], unsigned int sz)
{
    for (unsigned int i = 0; i < sz; i++) std::cout << " " << arr[i];
}

double average(const int arr[], unsigned int sz)
{
    int sum = 0;
    unsigned int i;
    for (i = 0; i < sz; i++) sum += arr[i];
    return sum / ++i;
}

int main()
{
    int scores[MAX_SIZE];
    unsigned int size = input(scores);
    display(scores, size);
    std::cout << std::endl << "Average score is "
              << average(scores, size) << std::endl;
    return 0;
}
