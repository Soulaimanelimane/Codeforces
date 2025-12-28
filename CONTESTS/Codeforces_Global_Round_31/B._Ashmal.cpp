#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    std::string res[t];
    for (int  i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        std::string s;
        for (int  j = 0; j < n; j++)
        {
            std::string str;
            std::cin >> str;
            if (j == 0)
            {
                s = str;
                continue;
            }
            if (str +s < s+str)
            {
                s = str + s;
            }
            else
                s += str;
        }
        res[i] = s;
    }
    for (int i = 0; i < t; i++)
        std::cout << res[i] << std::endl;
    
}