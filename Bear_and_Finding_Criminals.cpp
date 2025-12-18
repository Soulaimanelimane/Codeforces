#include <iostream>

int main()
{
    int n, a; 
    std::cin >> n >> a ;
    int arr[n];
    for (int  i = 0; i < n; i++)
        std::cin >> arr[i];
    
    int d = 0;
    int count = 0;
    a--;
    for (int  i = 0; d < n ; i++)
    {
        if (d == 0)
        {
            if (arr[a] == 1)
            {
                count++;
                arr[a] = 0;
            }
            d++;
            continue;
        }
        int flag = 0;
        int sn = 0;
        if (a - d >= 0)
        {
            if (arr[a - d] == 1)
            {
                flag = 1;
                arr[a - d] = 0 ;
            }
        }
        if (a + d < n)
        {
            if (arr[a + d] == 1)
            {
                sn = 1;
                arr[a + d] = 0;
            }
        }
        if (flag == 1 && sn == 1)
            count += 2;
        else if (flag == 1 && a + d >= n)
            count++;
        else if (sn == 1 && (a - d) < 0)
            count++;
        d++;
    }
    std::cout << count << std::endl;
}