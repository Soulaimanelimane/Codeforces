#include <iostream>


int checK_repet(int n, int arr[4], int j)
{
    for (int i = j + 1; i < 4; i++)
    {
        if (arr[i] == n)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        std::cin >> arr[i];
    
    int sum=0;
    for (int i = 0; i < 4; i++)
    {
        if (checK_repet(arr[i], arr, i))
            sum++;
    }
    std::cout << sum  << std::endl;
}