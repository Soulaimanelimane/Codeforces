#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        int n , k;
        std::cin >> n >> k;
        std::string str;
        std::cin >> str;
        for (int j = 0; j < n; j++)
        {
            if (str[j] == '1')
            {
                j += k;
                continue;
            }
            if(str[j] == '0')
                count++;
        }
        arr[i] = count;
    }
    for (int i = 0; i < t; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
}