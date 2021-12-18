#include<iostream>
#include<vector>
#include<list>
#include<map>


int main() 
{
	using namespace std;
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(11);
	v1.push_back(11);
	v1.push_back(12);
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) 
	{
		cout << *it << endl;
	}
	v1.erase(std::remove(v1.begin(), v1.end(), 11), v1.end());
	cout << "--------------" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "------------------" << endl;
	v1.erase(std::remove_if(v1.begin(), v1.end(), [](int x) {return  x >= 11; }), v1.end());
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) 
	{
		cout << *it << endl;
	}
	cout << "====================" << endl;
	list<int> l1;
	l1.push_back(1);
	l1.push_back(11);
	l1.push_back(111);
	l1.push_back(11);
	l1.push_back(12);
	for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) 
	{
		cout << *it << endl;
	}
	cout << "--------------" << endl;
	l1.remove(11);
	for (list<int>::iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "--------------" << endl;
	l1.remove_if([](int x) {return x >= 11; });
	
	for (list<int>::iterator it = l1.begin(); it != l1.end(); it++)
	{
		cout << *it << endl;
	}
	cout << "=================" << endl;
	map<string,int> m1;
	m1.insert(pair<string, int>("a1", 5));
	m1.insert(pair<string, int>("a2", 11));
	m1.insert(pair<string, int>("a3", 11));
	m1.insert(pair<string, int>("a4", 15));
	m1.erase("a3");
	for (map<string, int>::iterator i(m1.begin()); i != m1.end(); ) 
	{
		if (i->first.find('a') != string::npos) 
		{
			m1.erase(i++);
		}
		else {
			++i;
		}
	}
	return 0;
}
