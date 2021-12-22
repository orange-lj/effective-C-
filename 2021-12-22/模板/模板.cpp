#include<iostream>
#include<assert.h>
using namespace std;


template<class	T>
class ArrayList 
{
public:
	enum
	{
		size = 20
	};
	T array[size];
public:
	T& operator[](int index);
	//{
	//	assert(index >= 0 && index < size);
	//	return array[index];
	//}
};

template<class T>
T& ArrayList<T>::operator[](int index) 
{
	assert(index >= 0 && index < size);
	return array[index];
}

int main() 
{
	ArrayList<int> ia;
	ArrayList<float> fa;
	for (size_t i = 0; i < 20; i++) 
	{
		ia[i] = i + 1;
	}
	for (size_t j = 0; j < 20; j++)
	{
		fa[j] = j + 1;
	}
	for (size_t i = 0; i < 20; i++) 
	{
		cout << ia[i] << endl;
		cout << fa[i] << endl;
	}
	return 0;
}
