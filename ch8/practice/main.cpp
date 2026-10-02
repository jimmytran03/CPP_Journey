#include "Random.h" // defines Random::mt, Random::get(), and Random::generate()
#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
	std::cout << Random::get(1, 6) << '\n';  
	std::cout << Random::get(1u, 6u) << '\n'; 

	std::cout << Random::get<std::size_t>(1, 6u) << '\n'; 

	std::uniform_int_distribution die6{ 1, 6 }; 
	for (int count{ 1 }; count <= 10; ++count)
	{
		std::cout << die6(Random::mt) << '\t'; 
	}

	std::cout << '\n';

	return 0;
}