/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/*    Write a program that opens a text file, reads it               */
/*    character-by-character to the end of the file,                 */
/*    and reports the number of characters in the file.              */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <fstream>
# include <string>
# include <cctype>


int main()
{
    bool code = 0;
    std::string filename;
    std::ifstream textfile;
    unsigned int total = 0;

    std::cout << "Enter the filename: " << std::endl;
    std::cin >> filename;
    textfile.open(filename);
    if (textfile.is_open())
    {
        while (textfile.good()) {
            textfile.get();
            total++;
        };
        textfile.close();
        std::cout << "There're total " << total
                  << " characters in file " << filename << std::endl;
    }
    else
    {
        std::cout << "The file " << filename << " not found";
        code = 1;
    };

    return code;
}

