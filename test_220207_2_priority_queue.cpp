// https://www.cplusplus.com/reference/queue/priority_queue/top/

// priority_queue::top
#include <iostream>       // std::cout
#include <queue>          // std::priority_queue

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

void print_queue(std::priority_queue<int> q) { // NB: pass by value so the print uses a copy
	while (!q.empty()) {
		std::cout << q.top() << ' ';
		q.pop();
	}
	std::cout << '\n';
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

	std::cout << "mypq.top() is now " << mypq.top() << '\n';


	std::cout << "--------------" << '\n';

	print_queue(mypq);

	return 0;
}

///////////////////////////////////
// Output:
// mypq.top() is now 20
