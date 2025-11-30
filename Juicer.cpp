#include <iostream>

int main()
{
    int n, b, d;

    std::cin >>  n >> b >> d;
    int j;
    int sum = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> j;
        if (j <= b)
            sum += j;
        if (sum > d)
        {
            counter++;
            sum=0;
        }
    }
    std::cout<< counter << std::endl;
}