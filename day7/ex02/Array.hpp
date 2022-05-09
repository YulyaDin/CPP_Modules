#pragma once
#include <stdexcept>

template <typename T>
class Array
{
public:
	Array() : _content(nullptr), _size(0)
	{}

	Array(unsigned int n) : _content(new T[n]), _size(n)
	{}

	~Array()
	{
		destroyData();
	}

	Array(const Array<T>& other);
	Array<T>& operator=(const Array<T>& other);
	T& operator[](unsigned int idx);

	unsigned int size() const
	{
		return _size;
	}

private:
	T* _content;
	unsigned int _size;

	void destroyData()
	{
		if (_content != nullptr)
		{
			delete _content;
		}
	}
};

template <typename T>
Array<T>::Array(const Array<T>& other)
{
	_size = other._size;
	_content = new T[_size];
	for (size_t i = 0; i < _size; i++)
	{
		_content[i] = other._content[i];
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		destroyData();
		_size = other._size;
		_content = new T[_size];
		for (size_t i = 0; i < _size; i++)
		{
			_content[i] = other._content[i];
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size)
	{
		throw std::out_of_range("Wrong index number");
	}
	return _content[idx];
}
