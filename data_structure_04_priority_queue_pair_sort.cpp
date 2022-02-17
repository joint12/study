// https://developingbear.tistory.com/58
//
// 아래의 첫 번째 경우는 pair.first 값이 큰 순으로, 같으면 pair.second가 큰 순으로 정렬된다.

#include <iostream>
#include <queue>

typedef std::pair<int, int> pii;

int main(void)
{
	std::priority_queue<std::pair<int, int>> pq;

	pq.push(std::make_pair(1, 1));
	pq.push(std::make_pair(2, 15));
	pq.push(std::make_pair(1, 10));
	pq.push(std::make_pair(10, 1));
	pq.push(std::make_pair(10, 3));
	pq.push(std::make_pair(10, 2));
	pq.push(std::make_pair(2, 5));
	pq.push(std::make_pair(1, 2));

	while (!pq.empty())
	{
		std::cout << pq.top().first << ", " << pq.top().second << std::endl;
		pq.pop();
	}

	std::cout << "--------------------" << std::endl;
	///////////////////////////////////////////////////////////////

	std::priority_queue<pii, std::vector<pii>, std::greater<pii>> pq2;

	pq2.push(std::make_pair(1, 1));
	pq2.push(std::make_pair(2, 15));
	pq2.push(std::make_pair(1, 10));
	pq2.push(std::make_pair(10, 1));
	pq2.push(std::make_pair(10, 3));
	pq2.push(std::make_pair(10, 2));
	pq2.push(std::make_pair(2, 5));
	pq2.push(std::make_pair(1, 2));

	while (!pq2.empty())
	{
		std::cout << pq2.top().first << ", " << pq2.top().second << std::endl;
		pq2.pop();
	}

	return 0;
}

// 10, 3
// 10, 2
// 10, 1
// 2, 15
// 2, 5
// 1, 10
// 1, 2
// 1, 1
// --------------------
// 1, 1
// 1, 2
// 1, 10
// 2, 5
// 2, 15
// 10, 1
// 10, 2
// 10, 3