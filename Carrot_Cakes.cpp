#include <iostream>

int main()
{
    int n, t, k, d ;
    std::cin >> n >> t >>  k >>  d;
    int oven = (n * t) / k;
    int sec_oven  = oven - (t - d);
    if (oven  <= sec_oven)
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;

}