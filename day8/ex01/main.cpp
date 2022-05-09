#include <iostream>
#include <span.hpp>

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		sp.addNumber(13); // to get the exception
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(5);
		
		sp.addNumber(5);
		
		std::cout << sp.shortestSpan() << std::endl; // to get the exception
		std::cout << sp.longestSpan() << std::endl; // to get the exception
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::vector<int>vec(0);
		std::srand(time(0));

		Span bigSpan(1000);	
		for (int i = 0; i < 1000; i++)
		{
			vec.push_back(rand() % 2000);
		}
		bigSpan.addNumber(vec.begin(), vec.end());

		std::cout << bigSpan.shortestSpan() << std::endl;
		std::cout << bigSpan.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
