#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n ;
    int arr[n];
    int crime = 0;
    int police = 0;
    int total = 0;
    for (int  i = 0; i < n; i++)
        std::cin >>  arr[i];

    
    
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0)
            police += arr[j];
        
        if (arr[j] < 0)
            crime++;
        if (police <= 0)
        {
            total++;
            crime = 0;
        }
        else {
            police -= crime;
            crime=0;
        }

    }
    std::cout << total << std::endl;
}