#include <iostream>
#include <string>

int main()
{
    int n;
    std::string str;

    std::cin >> n ; 
    std::cin >> str;

    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
            count++;
    }
    std::cout << count<< std::endl;
}