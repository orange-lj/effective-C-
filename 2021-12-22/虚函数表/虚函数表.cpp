#include<iostream>
using namespace std;
class Base 
{
public:
	virtual void f() { cout << "Base::f()" << endl; }
	virtual void g() { cout << "Base::g()" << endl; }
	virtual void h() { cout << "Base::h()" << endl; }
public:
	//int a;
};

int main() 
{
	typedef void (*Fun)(void);
	Base b;
	Fun pFun = NULL;
	cout << sizeof(b) << endl;
	cout << "�麯����ĵ�ַΪ��" << (int*)(&b) << endl;
	cout << "�麯����ĵ�һ��������ַΪ��" << (int*)*(int*)(&b) << endl;
	pFun = (Fun)*((int*)*(int*)(&b));
	pFun();
	return 0;
}