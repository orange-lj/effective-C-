#include<iostream>
#include<string>
using namespace std;
class MemoryTest 
{
public:
	MemoryTest() 
	{
	
	}
	~MemoryTest() 
	{
		cout << "~MemoryTest()" << endl;
	}
	MemoryTest(const MemoryTest&) 
	{
	
	}
};

int main() 
{
	{
		//std::unique_ptr<MemoryTest>  ps(new MemoryTest);
		std::shared_ptr<std::string>  ps1(new string("abc"));
		std::shared_ptr<string> pt1 = ps1;
		cout << (*ps1).c_str() << endl;
		cout << (*pt1).c_str() << endl;
	};
}