// unordered_map::find
#include <iostream>
#include <string>
#include <unordered_map>

struct Node
{
	std::string name;
	std::string nick;
	bool valid;
	int age;
};

int main()
{
	std::unordered_map<std::string, Node> mymap;

	Node node[3] = {
		{"kim", "aa", true, 10},
		{"lee", "bb", false, 20},
		{"koo", "cc", true, 30}
	};

	for (int i = 0; i < 3; ++i)
	{
		mymap[node[i].name] = node[i];
	}

	std::string str1 = "kim";
	std::string str2 = "lee";

	std::cout << mymap[str1].name << std::endl;
	std::cout << mymap[str1].nick << std::endl;
	std::cout << mymap[str1].valid << std::endl;
	std::cout << mymap[str1].age << std::endl;
	std::cout << std::endl;

	std::cout << mymap[str2].name << std::endl;
	std::cout << mymap[str2].nick << std::endl;
	std::cout << mymap[str2].valid << std::endl;
	std::cout << mymap[str2].age << std::endl;

	return 0;
}

// kim
// aa
// 1
// 10

// lee
// bb
// 0
// 20