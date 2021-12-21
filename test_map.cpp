#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> mymap;

	mymap.insert(std::make_pair("aa", 10));
	mymap.insert(std::make_pair("bb", 20));

	for (auto it = mymap.begin(); it != mymap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;

	mymap["cc"] = 30;
	mymap["dd"] = 40;

	for (auto it = mymap.begin(); it != mymap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;
}

/*
aa 10
bb 20

aa 10
bb 20
cc 30
dd 40
*/