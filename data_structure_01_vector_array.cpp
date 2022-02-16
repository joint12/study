#include <iostream>
#include <vector>

int main(void)
{
	std::vector<int> vec1(3);

	std::cout << "vec1.capacity() : " << vec1.capacity() << std::endl;
	std::cout << "vec1.size() : " << vec1.size() << std::endl;
	std::cout << std::endl;

	///////////////////////////////////////

	std::vector<int> vec2[5];

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			vec2[i].push_back(j);
		}
	}

	for (const auto& ele : vec2)
	{
		for (int i = 0; i < ele.size(); ++i)
		{
			std::cout << ele[i] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}

// vec1.capacity() : 3
// vec1.size() : 3

// 0
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
