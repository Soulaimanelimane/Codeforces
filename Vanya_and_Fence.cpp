#include <iostream>

int main() {
    int n,  h;
    std::cin  >> n ;
    std::cin  >> h ;
    int prsn[n] , t;
    int count = 0;
    for (int  i = 0; i < n; i++)
    {
        std::cin  >> t;
        if (t > h)
            count +=2;
        else
            count++;
    }
    std::cout << count << std::endl;
}