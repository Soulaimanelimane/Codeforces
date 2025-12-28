#include <iostream>

//solved using the Binary Exponentiation algorithm

long long binpow(long long a, long long b, long long m) 
{
    long long res = 1;

    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    int b, p, m ;
    std::cin  >> b ;
    std::cin >> p ;
    std::cin >> m ;
    size_t  pw = binpow(b, p, m);
    std::cout << pw << std::endl;
}