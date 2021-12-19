#include<iostream>
#include<vector>
#include<algorithm>

int main() 
{
	using namespace std;
	vector<int> v1;
	for (size_t i = 0; i < 900000; i++) 
	{
		v1..push_back(i);
	}
	std::sort(v1.begin(), v1.end());
	bool isexist = std::binary_search(v1.begin(), v1.end(), 55);
	return 0;

}