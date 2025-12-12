#include <iostream>

int check_is_already_there(std::string s, char c , int del)
{
    for (int i = 0; i < del; i++)
    {
        if (s[i] == c)
            return 1;
    }
    return 0;
}

int main()
{
    std::string str ;
    std::getline(std::cin , str);
    int count = 0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            if (check_is_already_there(str, str[i], i) == 0)
                count++;
        }
    }
    std::cout << count << std::endl;
}