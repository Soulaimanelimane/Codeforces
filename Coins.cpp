#include <iostream>

char find_max(std::string str)
{
    char a, b;
    a = str[0];
    b = str[2];
    if (str[1] == '>')
        return a;
    else if (str[1] == '<')
        return b;
    return a;
}

char find_miss_max(char arr[], int flag)
{
    int a = 0;
    int b = 0;
    int c = 0;

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] == 'A')
            a++;
        else if (arr[i] == 'B')
            b++;
        else if (arr[i] == 'C')
            c++;
    }
    if (flag == 0)
    {
        if (a == 0)
            return 'A';
        else if (b == 0)
            return 'B';
        else if (c == 0)
            return 'C';
    }
    else if (flag == 1)
    {
        if (a == 1)
            return 'A';
        else if (b == 1)
            return 'B';
        else if (c == 1)
            return 'C';
    }
    else
    {
        if (a == 2)
            return 'A';
        else if (b == 2)
            return 'B';
        else if (c == 2)
            return 'C';
    }
    return 'Z';
}

int main()
{
    std::string str;
    char arr[3];
    for (int i = 0; i < 3; i++)
    {
        std::cin >> str;
        arr[i] = find_max(str);

    }
    char A, B, C;
    A = find_miss_max(arr, 0);
    B = find_miss_max(arr, 1);
    C = find_miss_max(arr, 2);
    if (A == 'Z' || B == 'Z' || C == 'Z')
    {
        std::cout << "Impossible\n" ;
        return 0;
    }
    std::cout << A;
    std::cout << B;
    std::cout << C << std::endl;
}
// std::cout << arr[i] << std::endl;