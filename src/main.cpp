#include <iostream>
#include "../include/lib.hpp"

int main()
{
	std::cout << "Hello world!" << std::endl;
	std::cout << "2 + 2 = " << add(2, 2) << std::endl;
	std::cout << "2 - 1 = " << subtract(2, 1) << std::endl;
	std::cout << "2 ^ 4 = " << pow(2, 4) << std::endl;
	std::cout << "2.5 + 1.25 = " << add_f(2.5f, 1.25f) << std::endl;
}
