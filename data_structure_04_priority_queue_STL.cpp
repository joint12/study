// https://www.cplusplus.com/reference/queue/priority_queue/top/

// priority_queue::top
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <vector>
#include <functional>     // std::greater

/*
template<typename T>
void print_queue(T q) { // NB: pass by value so the print uses a copy
	while (!q.empty()) {
		std::cout << q.top() << ' ';
		q.pop();
	}
	std::cout << '\n';
}
*/

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
	mypq.push(15);
	mypq.push(1);
	mypq.push(4);
	mypq.push(9);

	std::cout << "mypq.top() is now " << mypq.top() << std::endl;
	print_queue(mypq);
	std::cout << "--------------" << std::endl;

	// -------------------------------

	std::priority_queue<int, std::vector<int>, std::greater<int>> mypq2;

	mypq2.push(10);
	mypq2.push(20);
	mypq2.push(15);
	mypq2.push(1);
	mypq2.push(4);
	mypq2.push(9);

	std::cout << "mypq2.top() is now " << mypq2.top() << std::endl;

	while (!mypq2.empty())
	{
		std::cout << mypq2.top() << ", ";
		mypq2.pop();
	}
	std::cout << std::endl;
	std::cout << "--------------" << std::endl;

	return 0;
}

///////////////////////////////////
// Output:
//
// mypq.top() is now 20
// 20, 15, 10, 9, 4, 1,
// --------------
// mypq2.top() is now 1
// 1, 4, 9, 10, 15, 20,
// --------------
//
///////////////////////////////////
// 
// https://en.cppreference.com/w/cpp/container/priority_queue
// pq의 top이 낮은 숫자가 되는 것 참고