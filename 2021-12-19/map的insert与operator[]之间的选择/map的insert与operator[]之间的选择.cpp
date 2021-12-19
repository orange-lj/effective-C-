#include<iostream>
#include<map>

class Widget 
{
public:
	Widget() 
	{
	
	}
	Widget(int score) :score_(score) 
	{
	
	}
	~Widget() 
	{
	
	}
	Widget& operator=(const Widget& ins) 
	{
		if (this==&ins) 
		{
			return *this;
		}
		this->score_ = ins.score_;
		return *this; 
	}
	friend std::ostream& operator<<(std::ostream& out, const Widget& in) 
	{
		std::cout << in.score_;
		return out;
	}
private:
	int score_; 
};

int main()
{
	using namespace std;
	typedef map<int, Widget>::value_type V_TYPE;
	typedef map<int, Widget>::iterator MAP_ITER;
	map<int, Widget> m1;
	//新增采用insert
	m1.insert(V_TYPE(1, 88));
	m1.insert(V_TYPE(2, 78));
	m1.insert(V_TYPE(3, 68));
	m1.insert(V_TYPE(4, 88));
	for (MAP_ITER i(m1.begin()); i != m1.end(); i++)
	{
		cout << i->first << "," << i->second << endl;
	}
	m1[2] = Widget(108);
	for (MAP_ITER i(m1.begin()); i != m1.end(); i++) 
	{
		cout << i->first << "," << i->second << endl;
	}
	return 0;
}