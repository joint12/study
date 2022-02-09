#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>

int main()
{
	int a, b, c;
	int d[10];

	freopen("test_220209_scanf.txt", "r", stdin);

	scanf("%d", &a);
	std::cout << "[1] " << a << std::endl;

	scanf("%d %d", &a, &b);
	std::cout << "[2] " << a << ", " << b << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		scanf("%d", &c);
		d[i] = c;
	}

	std::cout << "[3] ";
	for (int i = 0; i < 5; ++i)
		std::cout << d[i] << ", ";
	std::cout << std::endl;

	return 0;
}

////////////////////////
// output :
// 
// [1] 1
// [2] 2, 3
// [3] 4, 5, 6, 7, 8,
