#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long n, k;

    std::cin >> n >> k;

    std::vector<long long> arr(n);
    for (long long  i = 0; i < n; i++)
        std::cin >> arr[i];
    
    long long min = 0 , index = 0;
    for (long long  i = 0; i < k; i++)
        min += arr[i];
    
    long long tmp = min;
    for (long long  i = 1; i <= n - k; i++)
    {
        tmp = tmp - arr[i - 1] + arr[i + k - 1];
        if (tmp < min)
        {
            min = tmp ;
            index = i;
        }
    }
    std::cout << index+1 << std::endl;
}
