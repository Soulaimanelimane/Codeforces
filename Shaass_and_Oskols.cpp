#include <iostream>


int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    
    for (int  i = 0; i < n; i++)
        std::cin >> arr[i];
    int m;
    std::cin >> m;
    int left = 0;
    int right = 0;
    for (int i = 0; i < m; i++)
    {
        int x,y;
        std::cin >> x;
        std::cin >> y;
        x--;
        y--;
        left  = y;
        right = (arr[x] - y)-1;
        if (x > 0)
            arr[x - 1] += left;
        if ((x + 1) < n)
            arr[x + 1] += right;
        arr[x] = 0;
    }
    for (int  i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
}