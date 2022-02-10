#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1, v2;
	v1.reserve(10000);
	v2.resize(10000);

	std::cout << "v1.capacity(): " << v1.capacity() << std::endl;
	std::cout << "v1.size(): " << v1.size() << std::endl;

	std::cout << "v2.capacity(): " << v2.capacity() << std::endl;
	std::cout << "v2.size(): " << v2.size() << std::endl;
}

// https://director-joe.kr/27
// 미리 할당해놓은 배열의 크기가 capacity, 할당해놓은 배열에 들어 있는 원소의 수가 size입니다.

// v1.capacity(): 10000
// v1.size(): 0
// v2.capacity(): 10000
// v2.size(): 10000