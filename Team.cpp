#include <iostream>

int main(){
    int n ;
    int count = 0;
    std::cin >> n;
    for (int  i = 0; i < n; i++)
    {
        int nbr = 0, one = 0;
        for (int i = 0; i < 3; i++)
        {
            std::cin  >> nbr;
            if (nbr == 1)
                one++;
        }
        if (one >= 2)
            count++;
    }
    std::cout << count << std::endl;
}