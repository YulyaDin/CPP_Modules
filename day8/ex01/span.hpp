#pragma once

#include <vector>

class Span
{
public:
	Span(unsigned int n);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	void addNumber(int n);

	template<typename T>
	void addNumber(T it1, T it2)
	{
		if (static_cast<unsigned int>(std::distance(it1, it2)) > _container.capacity() - _container.size())
		{
			throw std::overflow_error("Not enough space to store data");
		}
		else
		{
			for (; it1 != it2; it1++)
			{
				_container.push_back(*it1);
			}
		}
	}

	int shortestSpan() const;
	int longestSpan() const;
private:
	std::vector<int> _container;
};
