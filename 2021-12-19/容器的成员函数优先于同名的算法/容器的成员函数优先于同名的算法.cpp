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
	//����ʹ����������ĺ���find������ʱ��Ϊ����
	set<int>::iterator index = s1.find(151);
	//ʹ���㷨�ṩ��find����
	set<int>::iterator index1 = std::find(s1.begin(), s1.end(), 151);
	return 0;
}