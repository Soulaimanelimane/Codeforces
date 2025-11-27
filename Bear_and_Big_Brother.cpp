#include <iostream>

int main()
{
    int lw, bw;

    std::cin >> lw;
    std::cin >> bw;
    int  i=0;
    while (1)
    {
        i++; 
        lw *= 3;
        bw *= 2;
        if (lw > bw)
            break;
    }
    std::cout << i << std::endl;
}