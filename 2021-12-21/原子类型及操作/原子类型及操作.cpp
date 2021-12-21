#include<iostream>
#include<thread>
#include<chrono>
#include<atomic>
using namespace std;

atomic<int> g_num = 0;

void toprint(int c) 
{
	for (size_t i = 0; i < c; i++) 
	{
		g_num++;
		this_thread::sleep_for(chrono::milliseconds(50));
		cout << this_thread::get_id() << "      " << g_num << endl;
	}
}

int main() 
{
	int count = 1000;
	thread t1(toprint, count);
	thread t2(toprint, count);
	if (t1.joinable()) 
	{
		t1.join();
	}
	if (t2.joinable())
	{
		t2.join();
	}
	return 0;
}