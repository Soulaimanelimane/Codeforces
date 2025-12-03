#include <iostream>

int main()
{
    std::string str;
    int count = 0;
    int start = 50;
    
    for (int  i = 0; i < 4542; i++)
    {
        std::cin >> str ;
        int nbr = atoi(&str[1]);
        if (str[0] == 'L')
        {
            while (nbr > 0)
            {
                start--;
                if (start ==  -1)
                    start = 99;
                if (start == 0)
                    count++;
                nbr--;
            }
            // if (start == 0)
            //     count++;
        }
        else
        {
            while (nbr > 0)
            {
                start++;
                if (start ==  100)
                    start = 0;
                if (start == 0)
                    count++;
                nbr--;
            }
            // if (start == 0)
            //     count++;
        }
    }
    std::cout << count << std::endl;
    
}