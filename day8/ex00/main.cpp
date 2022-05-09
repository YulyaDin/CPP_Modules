#include <vector>
#include <list>
#include <iostream>

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> v;
		v.push_back(1);
		v.push_back(3);
		v.push_back(5);
		v.push_back(7);
		v.push_back(9);
		v.push_back(11);
		v.push_back(23);
		
		std::list<int> l;
		l.push_back(3);
		l.push_back(5);
		l.push_back(7);
		l.push_back(9);
		l.push_back(11);
		l.push_back(13);
		l.push_back(15);
		
		std::vector<int>::iterator vi = easyfind(v, 7);
		std::list<int>::iterator li = easyfind(l, 7);
		
		while (vi != v.end())
		{
			std::cout << *vi << " ";
			vi++;
		}
		std::cout << std::endl;
		vi = easyfind(v, 7);
		while (vi != v.begin())
		{
			std::cout << *vi << " ";
			vi--;
		}
		std::cout << std::endl;
		while (li != l.end())
		{
			std::cout << *li << " ";
			li++;
		}
		std::cout << std::endl;
		
		easyfind(l, 21);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
