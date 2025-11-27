#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        std::cin  >> arr[i][0];
        std::cin  >> arr[i][1];
    }
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][0] == arr[j][1])
                total++;
        }
        
    }
    std::cout << total << std::endl;
}