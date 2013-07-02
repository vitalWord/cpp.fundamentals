// it asks for a name few times and stores that into array

#include <iostream>
#include <string>

int main()
{
    struct person
    {
        std::string fname;
        std::string lname;
        char grade;
        short age;
    };

    person p0;
    std::cout << "What is your first name? ";
    getline(std::cin, p0.fname);
    std::cout << "What is your last name? ";
    getline(std::cin, p0.lname);
    std::cout << "What letter grade do you deserve? ";
    std::cin >> p0.grade;
    std::cout << "What is your age? ";
    std::cin >> p0.age;

    std::cout << "Name: " << p0.lname << ", " << p0.fname << std::endl;
    std::cout << "Grade: " << static_cast<char>(p0.grade + 1) << std::endl;
    std::cout << "Age: " << p0.age << std::endl;

    return 0;
};
