#include<iostream>
#include<set>
#include<algorithm>

int main() 
{
	using namespace std;
	set<int> s1;
	s1.insert(5);
	s1.insert(15);
	s1.insert(115);
	s1.insert(151);
	s1.insert(251);
	//优先使用容器自身的函数find，查找时间为对数
	set<int>::iterator index = s1.find(151);
	//使用算法提供的find函数
	set<int>::iterator index1 = std::find(s1.begin(), s1.end(), 151);
	return 0;
}