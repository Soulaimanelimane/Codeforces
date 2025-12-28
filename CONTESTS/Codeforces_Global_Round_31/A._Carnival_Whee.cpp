#include <iostream>

int get_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max; 
}

int main()
{
    int t_case;
    std::cin >>  t_case;
    int arr[t_case];
    int res[t_case];
    for (int  i = 0; i < t_case; i++)
    {
        int l, a, b;
        std::cin >> l >> a >> b;
        int spin[l];
        for (int j = 0; j < l; j++)
        {
            spin[j] = (a + b) %l;
            a = (a + b) %l;
        }
        res[i] = get_max(spin, l);
    }
    for (int i = 0; i < t_case; i++)
    {
        std::cout << res[i] << std::endl;
    }
    
}