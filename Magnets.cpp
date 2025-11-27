#include <iostream>
#include <string>

int main(){
    int n;
    int count = 1;
    std::cin >> n;
    std::string str[n * 2];
    std::string buf;
    for (int  i = 0; i < n; i++)
    {
        std::cin >> str[i];
        buf += str[i];
    }
    for (size_t i = 0; i < buf.size(); i++)
    {
        if (i < buf.size() && buf[i] == buf[i + 1])
            count++;
    }
    
    std::cout << count << std::endl;
    
}