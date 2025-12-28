#include <iostream>

int main()
{
    int n ;
    std::cin >> n;
    std::string str = "ROYGBIV";
    std::string s = "GBIV";

    int tmp = n;
    for (int i = 0; i < n - 7; i++)
    {
        str+= s[i % 4];
    }
    std::cout<< str << std::endl;
}