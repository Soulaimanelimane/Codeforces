#include <iostream>


int main()
{
    int k, r ;
    std::cin >> k >> r;
    int coins= 10;
    int shovel = 1;
    int sk = k;
    while (true)
    {
        
        if (k % coins == 0 || (k - r) % coins == 0)
            break;
        else
        {
            k = (sk * shovel);
            shovel++;
        }
    }
    
    if (shovel == 1)
        std::cout << shovel << std::endl;
    else
        std::cout << shovel - 1 << std::endl;

}