#include<iostream>
#include<thread>
#include<chrono>
using namespace std;

class ThreadGuard 
{
public:
	ThreadGuard(thread& t):thread_(t)
	{
	}
	~ThreadGuard() 
	{
		if (thread_.joinable()) 
		{
			thread_.join();
		}
	}
	ThreadGuard(ThreadGuard const&) = delete;
	ThreadGuard& operator=(ThreadGuard& th) = delete;
private:
	std::thread& thread_;
};

int g_score = 100;

void toprint(int c) 
{
	for (size_t i = 0; i < c; i++) 
	{
		g_score++;
		this_thread::sleep_for(std::chrono::milliseconds(50));
		cout << this_thread::get_id() << "g_score=" << g_score << endl;
	}
}
int main() 
{
	int count = 100;
	thread t1(toprint, count);
	ThreadGuard th(t1);
	return 0;
}