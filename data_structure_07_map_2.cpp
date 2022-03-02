#include <iostream>
#include <map>
#include <string>

int main()
{
	std::map<std::string, int> mymap;

	mymap["aa"] = 10;
	mymap.insert(std::make_pair("bb", 20));
	mymap.insert(std::pair<std::string, int>("cc", 30));

	for (auto it = mymap.begin(); it != mymap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;

	///////////////////////////////

	std::cout << "mymap.size() : " << mymap.size() << std::endl;
	std::cout << "---------------" << std::endl;

	///////////////////////////////

	// https://www.cplusplus.com/reference/map/map/find

	std::map<std::string, int>::iterator it;
	it = mymap.find("bb");
	if (it != mymap.end())
		mymap.erase(it);

	for (auto it = mymap.begin(); it != mymap.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "---------------" << std::endl;

	///////////////////////////////

	std::map<std::string, int>::iterator it2;
	it2 = mymap.find("cc");
	std::cout << "it2 : " << it2->first << " " << it2->second << std::endl;


}

//aa 10
//bb 20
//cc 30
//
//mymap.size() : 3
//-------------- -
//aa 10
//cc 30
//
//-------------- -
//it2 : cc 30