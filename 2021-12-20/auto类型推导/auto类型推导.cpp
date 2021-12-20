#include<iostream>
using namespace std;

int main() 
{
	auto name = "abc";
	cout << name << endl;
	cout << typeid(name).name()<<endl;
	auto num1 = 8.8;
	cout << typeid(num1).name() << endl;
	auto num2 = 88;
	cout << typeid(num2).name() << endl;
	auto fun = [](int x, int y)->int { return x + y; };
	cout << typeid(fun).name() << endl;
	auto fun2 = [&num2](int x, int y)->int {return x + y + num2; };
	int sum = fun2(2, 3);
	cout << sum << endl;
	return 0;
}