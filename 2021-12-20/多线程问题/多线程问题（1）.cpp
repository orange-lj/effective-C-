#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

int g_score = 0;
void doprint(int c) 
{
	for (size_t i = 0; i < c; i++) 
	{
		g_score++;
		std::this_thread::sleep_for(std::chrono::microseconds(50));
		cout << this_thread::get_id() << "g_score=" << g_score << endl;
	}
}

int main01() 
{
	int count = 100;
	std::thread t1(doprint, count);
	return 0;
}