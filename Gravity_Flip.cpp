#include <iostream>

int main()
{
    int n ;
    std::cin >> n ; 
    int arr[n];

    for (int  i = 0; i < n; i++)
        std::cin >> arr[i];
    
    int tmp; 
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                i = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}