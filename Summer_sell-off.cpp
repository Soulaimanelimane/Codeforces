#include <iostream>
#include <vector>

bool comp(std::pair<int, int>& a , std::pair<int, int>& b)
{
    return a.second  > b.second;
}
int main(){
    std::vector<std::pair<int, int> > vc;
    size_t n, f;
    std::cin >> n >> f;
    vc.resize(n);
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> vc[i].first;
        std::cin >> vc[i].second;
    }

   std::sort(vc.begin(), vc.end(), comp);
    
        for (const auto& p : vc) {
        std::cout << "{" << p.first << ", " << p.second << "} ";
    }
    std::cout << std::endl;
}