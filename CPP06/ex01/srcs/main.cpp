#include <iostream>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main()
{
	Data	*instance = new Data();
	Data	*serialized = NULL;

	std::cout << instance << std::endl;
	std::cout << *instance << std::endl;

	serialized = deserialize(serialize(instance));
	
	std::cout << serialized << std::endl;
	std::cout << *serialized << std::endl;

	serialized->setString("C'est bien 42.");
	serialized->setInt(4242);
	serialized->setSFloat(42.42);

	std::cout << instance << std::endl;
	std::cout << *instance << std::endl;
	std::cout << serialized << std::endl;
	std::cout << *serialized << std::endl;

	delete instance;

	return 0;
}