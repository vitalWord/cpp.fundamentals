/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* This exercise provides practice in writing functions dealing with */
/* arrays and structures. The following is a program skeleton.       */
/* Complete it by providing the described functions:                 */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>

const int SLEN = 30;

struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.
unsigned getinfo(student [], unsigned);

// display1() takes a student structure as an argument
// and displays its contents
void display1(student);

// display2() takes the addressof student structure as an
// argument and displays the structure’s contents
void display2(const student *);

// display3() takes the address of the first element of an array
// of student structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const student [], unsigned);


unsigned getinfo(student pa[], unsigned n)
{
    unsigned i = 0;
    do {
        std::cout << "Please enter the name: ";
        if (!std::cin.getline(pa[i].fullname, SLEN))
            break;
        std::cout << "Please enter the hobby: ";
        std::cin.getline(pa[i].hobby, SLEN);
        std::cout << "Specify the ooplevel: ";
        std::cin >> pa[i].ooplevel;
        while (std::cin.get() != '\n') continue;
        i++;
    } while (i < n);
    return i;
}

void display1(student st)
{
    std::cout << st.fullname << " "
              << st.hobby << " "
              << st.ooplevel << std::endl;
}

void display2(const student * ps)
{
    std::cout << ps->fullname << " "
              << ps->hobby << " "
              << ps->ooplevel << std::endl;
}

void display3(const student pa[], unsigned n)
{
    for (unsigned i = 0; i < n; i++) display1(pa[i]);
}

int main()
{
    std::cout << "Enter class size: ";
    unsigned class_size;
    std::cin >> class_size;
    while (std::cin.get() != '\n') continue;
    student * ptr_stu = new student[class_size];
    unsigned entered = getinfo(ptr_stu, class_size);
    for (unsigned i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    };
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Done\n";
    return 0;
}

