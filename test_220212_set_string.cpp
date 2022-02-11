#include <iostream>
#include <string>
#include <set>

int main()
{
	std::set<std::string> s;

	char ch1[10] = "hello";
	char ch2[10] = "world";

	s.insert(ch1);
	s.insert(ch2);

	std::cout << "s.size(): " << s.size() << std::endl;

	for (const auto& ele : s)
	{
		std::cout << ele << std::endl;
	}

	/////////////////////////////////////////////////////////

	std::set<std::string>::iterator it1 = s.find(ch1);
	if (it1 != s.end())
		std::cout << "it1: " << *it1 << std::endl;

	std::set<std::string>::iterator it2 = s.find("hel");
	if (it2 != s.end())
		std::cout << "it2: " << *it2 << std::endl;

	std::set<std::string>::iterator it3 = s.find("hello");
	if (it3 != s.end())
		std::cout << "it3: " << *it3 << std::endl;

	return 0;
}

// s.size() : 2
// hello
// world
// it1 : hello
// it3 : hello
