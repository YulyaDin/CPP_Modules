#include <iter.hpp>
#include <iostream>

template<typename T>
void print(T const& x)
{
	std::cout << x << std::endl;
}

int main()
{
	int intArr[5] = {5, 9, 13, 128, -7};
	double doubArr[3] = {23.07, 23.59, 9.01};
	std::string strArr[4] = {"Boring", "Exercises", "WILL BE", "DONE"};
	
	iter(intArr, 5, print);
	iter(strArr, 4, print);
	iter(doubArr, 3, print);
}
