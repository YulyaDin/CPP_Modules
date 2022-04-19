#include <iostream>

struct Data
{
	std::string name;
	int level;
	char wave;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data data;
	Data *deserializedData;
	uintptr_t	serializedData;

	data.name = "abartole";
	data.level = 18;
	data.wave = '1';

	serializedData = serialize(&data);
	deserializedData = deserialize(serializedData);
	std::cout << "name: " << deserializedData->name;
	std::cout << " level: " << deserializedData->level;
	std::cout << " wave: " << deserializedData->wave << std::endl;
	return 0;
}
