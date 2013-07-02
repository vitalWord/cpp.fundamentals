// wordloop.cpp counts the words until 'done' word is entered

# include <iostream>
# include <cstring>

int main()
{
    int words = 0;
    char word[80] = {};
    std::cout << "I'll count the words, so you'd better type them.";
    std::cout << " Enter 'done' to stop." << std::endl;
    while (strcmp(word, "done") != 0)
    {
        std::cin >> word;
        words++;
    }
    std::cout << "\nYou've entered " << (words - 1) << " words." << std::endl;
    return 0;
};
