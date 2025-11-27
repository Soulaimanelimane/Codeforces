#include <iostream>

int main() {
    int n, countA = 0 , countD = 0;
    std::string str;
    std::cin >> n;
    std::cin >>  str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            countA++;
        else if (str[i] == 'D')
            countD++;
    }
    if (countA > countD)
        std::cout  << "Anton" << std::endl;
    else if (countA < countD)
        std::cout << "Danik" << std::endl;
    else 
       std::cout << "Friendship" << std::endl; 
    
}