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

	/////////////////////////////////////////////////////////////////

	std::map<int, std::string> mymap2;

	mymap2.insert(std::make_pair(10, "aa"));
	mymap2.insert(std::make_pair(20, "bb"));

	for (auto it = mymap2.begin(); it != mymap2.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;

	mymap2[30] = "cc";
	mymap2[40] = "dd";

	for (auto it = mymap2.begin(); it != mymap2.end(); ++it)
		std::cout << it->first << " " << it->second << std::endl;
	std::cout << std::endl;
	
	std::cout << "------------------------" << std::endl;
	/////////////////////////////////////////////////////////////////

	// https://kimcoder.tistory.com/122
	// map[key]로 접근하기
	std::cout << "mymap2[30] : " << mymap2[30] << std::endl;
	// count 
	std::cout << "mymap2.count(30) : " << mymap2.count(30) << std::endl;
	std::cout << "mymap2.count(31) : " << mymap2.count(31) << std::endl;

}

/*
aa 10
bb 20

aa 10
bb 20
cc 30
dd 40

10 aa
20 bb

10 aa
20 bb
30 cc
40 dd

------------------------
mymap2[30] : cc
mymap2.count(30) : 1
mymap2.count(31) : 0

*/