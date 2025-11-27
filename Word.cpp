#include <iostream>
#include <cctype>

int main() {
    std::string word;
    std::cin >> word;
    int count = 0;

    for (size_t i = 0; i < word.size(); i++)
    {
        if (isupper(word[i]))
            count++;

    }
    if (count  > ((int)word.length() - count ))
    {
        for (size_t i = 0; i < word.size(); i++)
            word[i] = toupper(word[i]);
    }
    else
    {
        for (size_t i = 0; i < word.size(); i++)
            word[i] = tolower(word[i]);
    }
    std::cout << word << std::endl;

}