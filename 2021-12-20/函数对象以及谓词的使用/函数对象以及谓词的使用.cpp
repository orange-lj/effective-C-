#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
#include<numeric>
using namespace std;

int AddData(int x,int y) 
{
	return x + y;
}

bool Compare(int x, int y) 
{
	return x > y;
}

int main() 
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(15);
	v1.push_back(10);
	v1.push_back(13);
	v1.push_back(25);
	int sums = accumulate(v1.begin(), v1.end(), 1, std::plus<int>());
	int sums1 = accumulate(v1.begin(), v1.end(), 1, AddData);
	//Î½´Ê
	sort(v1.begin(), v1.end(), std::greater<int>());
	sort(v1.begin(), v1.end(), Compare);
	return 0;
}