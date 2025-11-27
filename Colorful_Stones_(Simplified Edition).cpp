#include <iostream>

int main()
{
    std::string s;
    std::string t;

    std::cin >> s;
    std::cin >> t;
    int pos = 1;
    int j = 0;
    for (size_t i = 0; i < t.size(); i++)
    {
        if (s[j] == t[i])
        {
            j++;
            pos++;
        }
    }
    std::cout << pos << std::endl;
}