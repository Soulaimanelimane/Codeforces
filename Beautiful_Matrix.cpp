#include <iostream>

int ft_find_line_one(int arr[5]){
    int i = 0;
    while (i < 5)
    {
        if (arr[i] == 1)
            return i + 1;
        i++;
    }
    return 0;
}

int ft_find_col_one(int arr[5][5])
{
    int i = 0;
    while (i < 5)
    {
        if (ft_find_line_one(arr[i]) != 0)
        {
            return i;
        }
        i++;

    }
    return 0;
}


int main()
{
    int arr[5][5] = {0};
    int var;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cin >> var ;
            arr[i][j] = var;
        }
    }

    int find_col = ft_find_col_one(arr);
    int find_pos = ft_find_line_one(arr[find_col]) - 1;
    int res= 0;
    if (find_col < 2)
    {
        res += (2 - find_col);
        if (find_pos > 2)
            res += (find_pos - 2);
        else
            res += (2 - find_pos);
    }
    else if (find_col >= 2)
    {
        res += (find_col - 2);
        if (find_pos > 2)
            res += (find_pos - 2);
        else
            res += (2 - find_pos);
    }
    std::cout << res << std::endl;
}

