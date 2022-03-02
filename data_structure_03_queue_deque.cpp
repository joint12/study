#include <iostream>
#include <queue>

int main()
{
	std::queue<int> myqueue;

	myqueue.push(1);
	myqueue.push(2);
	myqueue.push(3);

	// queue는 deque와 달리 index 접근이 불가능하다.
	//std::cout << "myQueue[1] : ";
	//for (int i = 0; i < myqueue.size(); ++i)
	//{
	//	std::cout << myqueue[i] << ", ";
	//}
	//std::cout << std::endl;

	std::cout << "myQueue[2] : ";
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

	///////////////////////////////////
	// deque는 index 접근이 가능하다.
	std::cout << "myDEque : ";
	for (int i = 0; i < mydeque.size(); ++i)
	{
		std::cout << mydeque[i] << ", ";
	}
	std::cout << std::endl;

	return 0;
}

