#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	vector<int> arr;
	for (int i = 0; i < num ; i++)
	{
		int n;
		cin >> n;
		arr.push_back(n);
	}
	int count = 0;
	map<int, int> counted;
	sort(arr.begin() , arr.end());
	arr.push_back(0);

	for (size_t i = 0 ; i < arr.size() ; i++)
	{
		count++;
		if (arr[i] != 0 && arr[i] != arr[i + 1])
        {
			counted[count] = arr[i];
            count = 0;
        }
	}
	map<int, int>::iterator it = counted.end();
    it--;
    cout << it->second << std::endl;
}