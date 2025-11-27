#include <iostream>
#include <string>


int main()
{
    int arr[4]; 
    for (int  i = 0; i < 4; i++)
    {
        std::cin >> arr[i];
    }
    std::string str;
    std::cin >> str;

    int sum = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        int nbr = str[i] - 48;
        sum +=  arr[nbr - 1] ;
    }
    std::cout << sum << std::endl;
}