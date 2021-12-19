#include<iostream>
#include<vector>
#include<numeric>

int pfunc(int x, int y) 
{
	return x + y;
}

int main() 
{
	using namespace std;
	vector<int> v1;
	v1.reserve(5);
	cout << v1.size() << "," << v1.capacity() << endl;
	for (size_t i=0;i<v1.capacity();i++) 
	{
		v1.push_back(i);
	}
	int ret = std::accumulate(v1.begin(), v1.end(), 10);
	int rrr = std::accumulate(v1.begin(), v1.end(), 0, pfunc);
	cout << ret << endl;
	cout << rrr << endl;
	return 0;
}