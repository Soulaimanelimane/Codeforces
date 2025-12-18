#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
    long long enrg = 0;
    long long dol = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        enrg += (arr[i] - arr[i + 1]);

        if (enrg < 0)
        {
            dol += (-enrg);
            enrg = 0;      
        }
    }
    std::cout << dol << std::endl;
}