#include <iostream>
#include <vector>
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    long long n, l, r, m;
    std::cin >> n;
    std::vector<long long> arr(n);
    for (long long   i = 0; i < n; i++)
        std::cin  >> arr[i];
    std::cin >> m;
    long long res[m];
    std::vector <long long> tmp = arr;
    std::sort(tmp.begin(), tmp.end());
    for (long long  i = 0; i < m; i++)
    {
        int l , r, t;
        long long sum = 0;
        std::cin >> t >> l >> r ;
        if (t == 1)
        {
            for (long long i = l-1; i < r; i++)
                sum += arr[i];
        }
        else
        {
            for (long long i = l-1; i < r; i++)
                sum += tmp[i];
        }
        res[i] = sum;
    }
    for (int i = 0; i < m; i++)
        std::cout << res[i] << std::endl;
    
}