#define _CRT_SECURE_NO_WARNINGS

#include <chrono>
#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <functional>
#include <unordered_set>

int main()
{
	char ch[3000][30];

	freopen("random_words_3000.txt", "r", stdin);
	for (int i = 0; i < 3000; ++i)
		scanf("%s", ch[i]);

	std::cout << "ch[0] : " << ch[0] << std::endl;
	std::cout << "ch[1] : " << ch[1] << std::endl;
	std::cout << "ch[2] : " << ch[2] << std::endl;
	std::cout << "ch[2999] : " << ch[2999] << std::endl;

	std::unordered_set<std::string> myset;

	myset.insert("aaa");
	myset.insert("bbb");

	if (myset.find("aaa") != myset.end())
		std::cout << "1" << std::endl;
	else
		std::cout << "2" << std::endl;

	if (myset.find("ccc") != myset.end())
		std::cout << "3" << std::endl;
	else
		std::cout << "4" << std::endl;

	return 0;
}

//ch[0] : today
//ch[1] : delicious
//ch[2] : react
//ch[2999] : nun
//1
//4