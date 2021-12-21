#include <iostream>
#include <algorithm>
#include <vector>
#include <array>

int main()
{
	std::vector<int> myvec{ 2,4,6,8,10,1,3,5,7,9 };

	for (int i = 0; i < 10; ++i)
		std::cout << myvec[i] << ' ';
	std::cout << std::endl;

	std::sort(myvec.begin(), myvec.end());

	for (int i = 0; i < 10; ++i)
		std::cout << myvec[i] << ' ';
	std::cout << std::endl;

	/////////////////////////////////////////////////

	std::array<int, 10> myarr{ 2,4,6,8,10,1,3,5,7,9 };

	for (int i = 0; i < 10; ++i)
		std::cout << myarr[i] << ' ';
	std::cout << std::endl;

	std::sort(myarr.begin(), myarr.end());

	for (int i = 0; i < 10; ++i)
		std::cout << myarr[i] << ' ';
	std::cout << std::endl;
}

/*
2 4 6 8 10 1 3 5 7 9
1 2 3 4 5 6 7 8 9 10
2 4 6 8 10 1 3 5 7 9
1 2 3 4 5 6 7 8 9 10
*/