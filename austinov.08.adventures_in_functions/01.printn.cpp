/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a function that normally takes one argument, the address of */
/* a string, and prints that string once. However, if a second, type */
/* int, argument is provided and is non zero, the function should    */
/* print the string a number of times equal to the number of times   */
/* that function has been called at that point. (Note that the       */
/* number of times the string is printed is not equal to the value   */
/* of the second argument; it is equal to the number of times the    */
/* function has been called). Yes, this is a silly function, but it  */
/* makes you use some of the techniques discussed in this chapter.   */
/* Use the function in a simple program that demonstrates how the    */
/* function works.                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>


void printn(std::string content, int flag = 0);
void printn(std::string content, int flag)
{
    static int run_count = 0;
    if (0 == flag) {
        std::cout << content << std::endl;
    } else
        for (int i = 0; i < run_count; i++)
            std::cout << content << std::endl;
    run_count++;
}

int main()
{
    std::string testr = "This is a test string.";

    std::cout << "1st run: " << std::endl;
    printn(testr);
    std::cout << "2d run: " << std::endl;
    printn(testr);
    std::cout << "3d run: " << std::endl;
    printn(testr);
    for (int i = 4; i < 10; i++)
    {
        std::cout << i << "th run (with second arg set to"
                  << i << "): " << std::endl;
        printn(testr, i);
    };
    std::cout << "Last run (with single arg again): " << std::endl;
    printn(testr);
    return 0;
}
