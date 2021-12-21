#include <iostream>
#include <unordered_set>

int main()
{
	std::unordered_set<int> myset;

	myset.insert(20);
	myset.insert(10);
	myset.insert(1000);
	myset.insert(100);
	myset.insert(5);
	myset.insert(1);

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
100 20 10 1 1000 5
100 20 1 1000 5
size: 5
*/

// unordered_set은 set과 달리 정렬이 안됨