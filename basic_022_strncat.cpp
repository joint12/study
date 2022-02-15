#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

int main()
{
	char ch0[10];
	ch0[0] = NULL;

	char ch1[10] = "abc";
	char ch2[10] = "def";

	strncat(ch0, ch1, 1);
	strncat(ch0, ch2, 2);

	std::cout << "ch0: " << ch0 << std::endl;
	std::cout << "ch0[0]: " << ch0[0] << std::endl;
	std::cout << "ch0[1]: " << ch0[1] << std::endl;

	return 0;
}

// char 배열 부분 합치기