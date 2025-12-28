#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n; 
    std::cin >> n;

    std::string str;
    std::cin >> str;
    
    char tmp[n + 1]; 
    

    int mid = (n - 1) / 2; 
    tmp[mid] = str[0];
    
    int lef = mid - 1;
    int rig = mid + 1;
    
    for (int i = 1; i < n; i++)
    {
        if (n % 2 == 0) {
            if (i % 2 != 0) {
                tmp[rig] = str[i];
                rig++;
            } else {
                tmp[lef] = str[i];
                lef--;
            }
        } else {
            if (i % 2 != 0) {
                tmp[lef] = str[i];
                lef--;
            } else {
                tmp[rig] = str[i];
                rig++;
            }
        }
    }
    
    tmp[n] = '\0';
    std::cout << tmp << std::endl;
    return 0;
}