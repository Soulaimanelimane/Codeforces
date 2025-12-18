#include  <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int  i = 0; i < n; i++)
        std::cin >> arr[i];
    

    int count = 1;
    int len = 0;
    int k = 0;
    for (int j = 0; j < n; j++)
    {
        len = 1;
        k = j;
        while (k  < n && arr[k] >= arr[k + 1])
        {
            if (k + 1 < n &&  arr[k] >= arr[k + 1])
                len++;
            k++;
        }
        k = j;
        while (k >= 0 && arr[k] >= arr[k - 1])
        {
            if (k - 1 >= 0 &&   arr[k] >= arr[k - 1])
                len++;
            k--;
        }

        if (len > count )
            count = len;

    }
    std::cout << count << std::endl;
}