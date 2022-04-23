#pragma once

template<typename T>
void iter(T* massive, int lenght, void(*func)(const T&))
{
	for (int i = 0; i < lenght; i++)
	{
		func(massive[i]);
	}
}
