#include<iostream>
#include<map>
#include<string>

int main() 
{
	typedef std::map<std::string, int> WORDS_MAP;
	typedef std::map<std::string, int>::iterator WORDS_ITERO;
	WORDS_MAP words_map;
	std::string word;
	while (std::cin >> word) 
	{
		++words_map[word];
	}
	WORDS_ITERO itr(words_map.begin());
	for (; itr != words_map.end(); itr++) 
	{
		std::cout << itr->first << "," << itr->second << std::endl;
	}

}