#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>

int main()
{
	int a, b, c;
	int d[10];
	char ch[10];

	freopen("test_220209_scanf.txt", "r", stdin);

	scanf("%d", &a);
	std::cout << "[1] " << a << std::endl;

	scanf("%d %d", &a, &b);
	std::cout << "[2] " << a << ", " << b << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		// scanf("%d", &c);
		// d[i] = c;
		scanf("%d", &d[i]);
	}

	std::cout << "[3] ";
	for (int i = 0; i < 5; ++i)
		std::cout << d[i] << ", ";
	std::cout << std::endl;

	scanf("%s", ch);
	std::cout << "[ch] " << ch << std::endl;

	return 0;
}

////////////////////////
// output :
// 
// [1] 1
// [2] 2, 3
// [3] 4, 5, 6, 7, 8,
// [ch] hello