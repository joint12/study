#include <iostream>
#include <set>

int main()
{
	std::set<int> myset;

	myset.insert(1);
	myset.insert(10);
	myset.insert(20);
	myset.insert(5);

	for (auto it = myset.begin(); it != myset.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	myset.erase(10);

	for (auto it = myset.begin(); it != myset.end(); ++it)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "size: " << myset.size() << std::endl;
}

/*
1 5 10 20
1 5 20
size: 3
*/

// 입력값이 자동으로 오름차순으로 정렬된다.