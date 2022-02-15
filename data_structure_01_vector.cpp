#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	std::vector<int>::iterator it;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	std::cout << "AA ";
	for (const auto& ele : vec)
		std::cout << ele << ", ";
	std::cout << std::endl;

	std::cout << "BB ";
	for (auto it = vec.begin(); it != vec.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;

	return 0;
}

// AA 1, 2, 3,
// BB 1, 2, 3,