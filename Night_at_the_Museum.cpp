#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cin >> str;

    int p = 97;
    int sum  = 0 ;
    for (size_t i = 0; i < str.length(); i++)
    {
        int tp = (int)str[i];
        int res = 26 -  abs(p - tp) ;
        if  (res <= 13)
            sum += res;
        else
            sum += abs(p - tp);
        p = str[i];
    }
    std::cout << sum << std::endl;
}