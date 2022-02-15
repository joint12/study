#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };

	int* ptr1 = arr;
	int* ptr2 = &arr[0];

	std::cout << "arr[0] : " << arr[0] << std::endl;
	std::cout << "ptr1[0] : " << ptr1[0] << std::endl;
	std::cout << "ptr2[0] : " << ptr2[0] << std::endl;
	std::cout << std::endl;

	std::cout << "&arr : " << &arr << std::endl;
	std::cout << "ptr1 : " << ptr1 << std::endl;
	std::cout << "ptr2 : " << ptr2 << std::endl;
	std::cout << std::endl;

	std::cout << "ptr1 + 1 : " << ptr1 + 1 << std::endl;
	std::cout << "ptr2 + 1 : " << ptr2 + 1 << std::endl;
	std::cout << std::endl;

	std::cout << "*(arr) : " << *(arr) << std::endl;
	std::cout << "*(ptr1) : " << *(ptr1) << std::endl;
	std::cout << "*(ptr2) : " << *(ptr2) << std::endl;

	return 0;
}

// arr[0] : 1
// ptr1[0] : 1
// ptr2[0] : 1

// &arr : 004FFCD0
// ptr1 : 004FFCD0
// ptr2 : 004FFCD0

// ptr1 + 1 : 004FFCD4
// ptr2 + 1 : 004FFCD4

// *(arr) : 1
// *(ptr1) : 1
// *(ptr2) : 1