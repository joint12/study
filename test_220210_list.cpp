#include <iostream>
#include <list>

int main()
{
	std::list<int> mylist;

	mylist.push_back(10); ///
	mylist.push_back(11); ///
	mylist.push_back(12); ///

	std::cout << "[1] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	mylist.pop_back(); ///

	std::cout << "[2] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	mylist.push_front(9); ///
	mylist.push_front(8); ///

	std::cout << "[3] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	mylist.pop_front(); ///

	std::cout << "[4] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	mylist.remove(10); ///

	std::cout << "[8] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	std::list<int>::iterator it = mylist.begin();

	mylist.erase(++it); ///

	std::cout << "[9] ";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << *it << ", ";
	std::cout << std::endl;
	//////////////////////////////////////////////////////

	return 0;
}

//[1] 10, 11, 12,
//[2] 10, 11,
//[3] 8, 9, 10, 11,
//[4] 9, 10, 11,
//[8] 9, 11,
//[9] 9,