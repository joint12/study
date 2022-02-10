#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

int main()
{
	char ch1[20] = "abc";
	char ch2[20] = "hello";

	int length1 = strlen(ch1);
	int length2 = strlen(ch2);

	std::cout << "length1: " << length1 << std::endl;
	std::cout << "length2: " << length2 << std::endl;

	std::cout << "-----------------------------" << std::endl;
	///////////////////////////////////////////////////////

	char ch3[20] = "abc";
	char ch4[20];

	std::cout << "ch3: " << ch3 << std::endl;
	std::cout << "ch4: " << ch4 << std::endl;

	strcpy(ch4, ch3);

	std::cout << "ch3: " << ch3 << std::endl;
	std::cout << "ch4: " << ch4 << std::endl;

	std::cout << "-----------------------------" << std::endl;
	///////////////////////////////////////////////////////

	char ch5[20] = "ab";
	char ch6[20] = "cd";
	char ch7[20] = "ef";

	std::cout << "ch5 : " << ch5 << std::endl;
	strcat(ch5, ch6);
	std::cout << "ch5 : " << ch5 << std::endl;
	strcat(ch5, ch7);
	std::cout << "ch5 : " << ch5 << std::endl;

	std::cout << "-----------------------------" << std::endl;
	///////////////////////////////////////////////////////

	char ch8[20] = "ab";
	char ch9[20] = "ab";
	char ch10[20] = "cd";

	// https://dojang.io/mod/page/view.php?id=346
	// strcmp는 같으면 0, 다르면 +1 이나 -1이 나옴
	if (!strcmp(ch8, ch9))
		std::cout << "111" << std::endl;
	else
		std::cout << "222" << std::endl;

	if (!strcmp(ch8, ch10))
		std::cout << "333" << std::endl;
	else
		std::cout << "444" << std::endl;

	std::cout << "-----------------------------" << std::endl;
	///////////////////////////////////////////////////////

	return 0;
}

// https://m.blog.naver.com/zlatmgpdjtiq/221661570066

// output : 
// 
// length1: 3
// length2 : 5
// ---------------------------- -
// ch3 : abc
// ch4 : 儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆
// ch3 : abc
// ch4 : abc
// ---------------------------- -
// ch5 : ab
// ch5 : abcd
// ch5 : abcdef
// ---------------------------- -
// 111
// 444
// ---------------------------- -