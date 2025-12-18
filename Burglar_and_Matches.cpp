#include <iostream>

void ft_sort(int size , int arr[], int val[])
{
	int	i;
	int	tmp;
    int swp;
 
	i = 0;
	while (i < size-1)
	{
		while (val[i] < val[i + 1])
		{
			tmp = arr[i];
            swp = val[i];
 
			arr[i] = arr[i + 1];
            val[i] = val[i + 1];
 
			arr[i + 1] = tmp;
            val[i + 1] = swp;
			i = 0;
		}
		i++;
	}
    
 
}

int main()
{
    int n, m;
    std::cin >> n >> m ;
    int box[m];
    int val[m];
    for (int i = 0; i < m; i++)
        std::cin >> box[i] >> val[i] ;

    
    ft_sort(m , box , val  );
    

    int count = 0;
    int count_box = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < box[i] && count_box < n; j++)
        {
            count += val[i];
            count_box++;
            
        }
    }
    
    std::cout << count << std::endl;
    return 0;
}
