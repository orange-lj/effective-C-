#include<iostream>
#include<vector>

//ע��reserve��resize������resize����ÿռ����ֱ�ӳ�ʼ���ã�reserveֻ�Ƿ���ռ�

int main() 
{
	using namespace std;
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(15);
	v1.push_back(25);
	cout << v1.size()<<","<< v1.capacity() << endl;
	vector<int> v2;
	v2.reserve(1000);
	for (size_t i = 0; i < 1000; i++) 
	{
		v2.push_back(i);
	}
	cout << v2.size() << "," << v2.capacity() << endl;

	return 0;
}