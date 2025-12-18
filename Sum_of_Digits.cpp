#include <iostream>
#include <string>

std::string ft_count(std::string str)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        count += (str[i] - 48);

    }
    return std::to_string(count) ;
}

int main()
{
    std::string str;
    std::cin >> str ;
    int count = 0;
    std::string len;
    while (str.length() != 1)
    {
        len  = ft_count(str);
        str = len;
        count++;
    }
    std::cout << count << std::endl;
}