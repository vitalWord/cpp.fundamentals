/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                   */
/* Write a program that reads input a word at a time until a lone q  */
/* is entered. The program should then report the number of words    */
/* that began with vowels, the number that began with consonants,    */
/* and the number that fit neither of those categories.              */
/*                                                                   */
/* One approach is to use isalpha() to discriminate between words    */
/* beginning with letters and those that don’t and then use an if    */
/* or switch statement to further identify those passing the         */
/* isalpha() test that begin with vowels.                            */
/* A sample run might look like this:                                */
/*                                                                   */
/*    Enter words (q to quit):                                          */
/*    The 12 awesome oxen ambled                                     */
/*    quietly across 15 meters of lawn. q                            */
/*    5 words beginning with vowels                                  */
/*    4 words beginning with consonants                              */
/*    2 others                                                       */
/*                                                                   */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

# include <iostream>
# include <string>
# include <cctype>

bool is_vowel(char ch);
bool is_vowel(char ch)
{
    bool vowel = false;
    switch (ch) {
        case 'a': case 'A':
        case 'o': case 'O':
        case 'e': case 'E':
        case 'u': case 'U':
        case 'i': case 'I': vowel = true;
                            break;
    };
    return vowel;
}

int main()
{
    std::string word;
    unsigned int vow = 0;
    unsigned int con = 0;
    unsigned int oth = 0;

    std::cout << "Enter the words (q to quit): " << std::endl;
    while (std::cin >> word && !("q" == word || "Q" == word))
    {
        if (isalpha(word[0]))
        {
            (is_vowel(word[0])) ? vow++ : con++;
        } else oth++;
    };
    std::cout << vow << " words beginning with vowels" << std::endl;
    std::cout << con << " words beginning with consonants" << std::endl;
    std::cout << oth << " others" << std::endl;


    return 0;
}

