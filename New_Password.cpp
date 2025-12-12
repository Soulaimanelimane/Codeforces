#include <iostream>

int main()
{
    int n , k ;
    std::cin >> n >> k;
    char str[n];
    int a  = 97;
    for (int i = 0; i < k; i++)
    {
        str[i] = a;
        a++;
        str[i + 1] = '\0';
    }
    int del = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[del] == '\0')
            del=0;
        printf("%c" , str[del]);
        del++;
    }
    std::cout << std::endl;
}