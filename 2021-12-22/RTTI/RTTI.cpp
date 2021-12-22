//RTTI  运行时类型识别
#include<iostream>
using namespace std;

class Base 
{
public:
	virtual void f() { cout << "Base::f()" << endl; }
	virtual void g() { cout << "Base::g()" << endl; }
	virtual void h() { cout << "Base::h()" << endl; }
	virtual ~Base() {}
};

class Derive :public Base
{
public:
	//Derive() {}
	virtual void g() { cout << "Derive::g()" << endl; }
	void myselffunc() {}
	virtual ~Derive() {}
};

int main() 
{
	Base* pb = new Derive();
	pb->g();
	Derive myderive;
	Base& yb = myderive;
	yb.g();
	const std::type_info& tp = typeid(*pb);
	Base* pb2 = new Derive();
	Base* pb3 = new Derive();
	const std::type_info& tp2 = typeid(*pb2);
	const std::type_info& tp3 = typeid(*pb3);
	cout << tp3.name() << endl;
	return 0;
}