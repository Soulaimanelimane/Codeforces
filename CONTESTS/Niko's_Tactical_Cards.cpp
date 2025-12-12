#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        
        for (int j = 0; j < n; j++)
            cin >> a[j];
        for (int j = 0; j < n; j++)
            cin >> b[j];
        
        int s = max(-a[0], b[0]);
        
        for (int j = 1; j < n; j++)
        {
            s += max(-a[j], a[j-1] - b[j-1] + b[j]);
        }
        
        cout << s << endl;
    }
    
    return 0;
}