#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<iostream>
#include<string>

int main()
{
	//char string1[6] = "Hello\0"; // strlen(str) = 5, sizeof(str) = 6 (한개의 NUL) 
	//char string2[7] = "Hello\0"; // strlen(str) = 5, sizeof(str) = 7 (두개의 NUL) 
	//char str[5] = "Hello\0"; // 컴파일 에러 (1) 
	//char str[6] = "Hello\0"; // 컴파일 에러 (2) 

	char hello1[6] = "Hello"; // 마지막 Null 문자가 자동으로 채워지네
	char hello2[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	char hello3[6] = "Hello";
	hello3[5] = '0'; // Null 문자를 다른 글자로 바꾸니 아래에서 출력할 떄 비정상 결과가 나옴

	std::cout << "hello1 : " << hello1 << std::endl;
	std::cout << "hello2 : " << hello2 << std::endl;
	std::cout << "hello3 : " << hello3 << std::endl;

	std::string str = "Hello";
	char hello4[6];
	strcpy(hello4, str.c_str()); // 마지막 Null 문자가 자동으로 채워지네

	std::cout << "hello4 : " << hello4 << std::endl;
}

//hello1 : Hello
//hello2 : Hello
//hello3 : Hello0儆儆儆儆儆Hello
//hello4 : Hello