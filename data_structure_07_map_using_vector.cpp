#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::unordered_map<std::string, std::vector<int>> map;
	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(2);

	map["abc"] = vec;
	map["abc"].push_back(3);

	for (int i = 0; i < 3; ++i)
	{
		std::cout << map["abc"][i] << ", ";
	}

	return 0;
}

// map의 value를 vector로 활용하기

// 1, 2, 3,