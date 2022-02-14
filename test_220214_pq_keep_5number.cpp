#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>
#include <functional>     // std::greater

void print_queue(std::priority_queue<int> q)
{
	while (!q.empty())
	{
		std::cout << q.top() << ", ";
		q.pop();
	}
	std::cout << std::endl;
}

int main()
{
	std::priority_queue<int> mypq;

	mypq.push(10);
	mypq.push(20);
	mypq.push(30);
	mypq.push(40);
	mypq.push(50);

	print_queue(mypq);
	// -------------------------------

	mypq.push(99);
	mypq.pop();
	print_queue(mypq);
	// -------------------------------

	mypq.push(15);
	mypq.pop();
	print_queue(mypq);
	// -------------------------------

	mypq.push(1);
	mypq.pop();
	print_queue(mypq);
	// -------------------------------

	std::cout << "--------------" << std::endl;

	return 0;
}

// step마다 숫자가 추가되고, 가장 작은 5개만 유지하기
//
// 50, 40, 30, 20, 10,
// 50, 40, 30, 20, 10,
// 40, 30, 20, 15, 10,
// 30, 20, 15, 10, 1,
// --------------
