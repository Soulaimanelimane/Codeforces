#include <iostream>
#include <string>
 
int main() {
    int n;
    std::cin >> n ;
 
    int arr[n];
    for (int  i = 0; i < n; i++)
        std::cin >> arr[i];
    int sera[n];
    int dima[n];
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n)
    {
        if (arr[i] > arr[n - 1])
        {
            sera[j] = arr[i];
            arr[i] = 0;
            i++;
            j++;
        }
        else
        {
            sera[j] = arr[n - 1];
            arr[n - 1] = 0;
            n--;
            j++;
        }
        if (i < n && arr[i] > arr[n - 1])
        {
            dima[k] = arr[i];
            arr[i] = 0;
            i++;
            k++;
        }
        else if (n - 1 >= i)
        {
            dima[k] = arr[n - 1];
            arr[n - 1] = 0;
            n--;
            k++;
        }
    }
    sera[j] = 0;
    dima[k] = 0; 
    int sum_sera = 0;
    int sum_dima = 0;
    
    for (int f = 0; sera[f] != 0 ; f++)
        sum_sera += sera[f];
    for (int f = 0; dima[f] != 0 ; f++)
        sum_dima +=  dima[f];
    std::cout << sum_sera << " " << sum_dima << std::endl;
}