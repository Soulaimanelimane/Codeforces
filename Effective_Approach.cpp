#include <iostream>

int main()
{
    long long n, m;
    std::cin >> n ;
    long long  arr[n];
    for (long long  i = 1; i <= n; i++)
    {
        long long value;
        std::cin >> value;
        arr[value] = i;
    }
    std::cin >> m;
    long long  count_vas = 0;
    long long count_pet = 0;
    long long res ;
    for (long long  i = 0; i < m; i++)
    {
        long long f ;
        std::cin >> f;
        res = arr[f];
        count_vas += res;
        count_pet += (n - res) + 1;
    }
    std::cout << count_vas << " " << count_pet << std::endl;
}