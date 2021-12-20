#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>

using namespace std;

class ThreadGood
{
public:
	ThreadGood(thread& th) :thread_(th)
	{

	}
	~ThreadGood()
	{
		if (thread_.joinable())
		{
			thread_.join();
		}
	}
	ThreadGood(ThreadGood const&) = delete;
	ThreadGood& operator=(ThreadGood& t) = delete;
private:
	thread& thread_;
};

int g_num = 0;
mutex g_mutex;
void pt(int c) 
{
	for (size_t i = 0; i < c; i++) 
	{
		unique_lock<mutex>lock(g_mutex);
		g_num++;
		this_thread::sleep_for(chrono::milliseconds(50));
		cout << this_thread::get_id() <<"     " << g_num << endl;
	}
}

int main() 
{
	int count = 200;
	thread td1(pt, count);
	thread td2(pt, count);
	ThreadGood tg1(td1);
	ThreadGood tg2(td2);
	return 0;
}