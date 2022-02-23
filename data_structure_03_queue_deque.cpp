#include <iostream>
#include <queue>

int main()
{
	std::queue<int> myqueue;

	myqueue.push(1);
	myqueue.push(2);
	myqueue.push(3);

	std::cout << "myqueue contains: ";
	while (!myqueue.empty())
	{
		std::cout << ' ' << myqueue.front();
		myqueue.pop(); // front가 날라감
	}
	std::cout << std::endl;

	// myqueue contains:  1 2 3

	std::cout << std::endl;
	////////////////////////////////////////////////////

	std::deque<int> mydeque;
	int sum(0);
	mydeque.push_back(10);
	mydeque.push_back(20);
	mydeque.push_back(30);

	std::cout << "front : " << mydeque.front() << std::endl;
	mydeque.pop_front();
	std::cout << "front : " << mydeque.front() << std::endl;

	// front: 10
	// front : 20

	return 0;
}

