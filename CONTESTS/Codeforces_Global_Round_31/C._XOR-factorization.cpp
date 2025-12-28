#include <iostream>
//fail in the secend test 
int  main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long  t;
    std::cin >> t;
    long long *res[t];
    for (long long  i = 0; i < t; i++)
    {
        long long  n, k;
        std::cin >> n >> k;
        if (k % 2 != 0)
        {
            for (long long  j = 0; j < k; j++)
                std::cout << n << " ";
        }
        else
        {
            std::cout << 0 << " ";
            for (long long  j = 0; j < k-1; j++)
                std::cout << n << " ";
        }
        std::cout << std::endl;
    }
    
}
