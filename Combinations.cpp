#include <iostream>

int main()
{
    int N , M;
    std::cin >> N >> M;

    size_t res;
    for (size_t i = 1; i <= M; i++)
    {
        res = res * (N - M + i) / i;
    }
    std::cout << res << std::endl;
}