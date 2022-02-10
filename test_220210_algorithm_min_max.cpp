#include <iostream>
#include <algorithm>

int main(void)
{
	std::cout << "min(1, 2)       : " << std::min(1, 2) << std::endl;
	std::cout << "min(2, 2)       : " << std::min(2, 2) << std::endl;
	std::cout << "min('b', 'd')   : " << std::min('b', 'd') << std::endl;
	std::cout << "min(12.3, 34.5) : " << std::min(12.3, 34.5) << std::endl << std::endl;

	std::cout << "max(1, 2)       : " << std::max(1, 2) << std::endl;
	std::cout << "max(2, 2)       : " << std::max(2, 2) << std::endl;
	std::cout << "max('b', 'd')   : " << std::max('b', 'd') << std::endl;
	std::cout << "max(12.3, 34.5) : " << std::max(12.3, 34.5) << std::endl;

	return 0;
}

// https://blockdmask.tistory.com/366
