#include "span.hpp"
#include <algorithm>

Span::Span(unsigned int n)
{
	_container.reserve(n);
}

Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span()
{
}

Span &Span::operator=(Span const &other)
{
	if (this == &other)
		return *this;

	_container = other._container;
	return *this;
}

void Span::addNumber(int n)
{
	if (_container.size() == _container.capacity())
	{
		throw std::logic_error("Array overflow exception");
	}
	_container.push_back(n);
}

int Span::shortestSpan() const
{
	if (_container.size() <= 1)
	{
		throw std::logic_error("There aren't even 2 elements in the container");
	}
	return *min_element(_container.begin(), _container.end());
}

int Span::longestSpan() const
{
	if (_container.size() <= 1)
	{
		throw std::logic_error("There aren't even 2 elements in the container");
	}
	return *max_element(_container.begin(), _container.end());
}
