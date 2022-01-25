#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

int main(void)
{
	char str[30];
	std::string s = std::string("abcde");
	
	strcpy(str, s.c_str());
	std::cout << "str : " << str << std::endl;

	for (int i = 0; str[i]; ++i)
	{
		std::cout << i << ", ";
	}

	return 0;
}
