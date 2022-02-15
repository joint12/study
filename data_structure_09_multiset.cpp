#include <iostream>
#include <set>

int main()
{
	std::multiset<int> mymultiset;

	mymultiset.insert(10);
	mymultiset.insert(20);
	mymultiset.insert(20);
	mymultiset.insert(30);
	mymultiset.insert(30);
	mymultiset.insert(30);

	std::cout << mymultiset.count(0) << std::endl;  // 0
	std::cout << mymultiset.count(10) << std::endl; // 1
	std::cout << mymultiset.count(20) << std::endl; // 2
	std::cout << mymultiset.count(30) << std::endl; // 3

	std::cout << mymultiset.size() << std::endl;    // 6

	return 0;
}