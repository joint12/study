#include <iostream> // std::cout
#include <stack>    // std::stack

int main()
{
	std::stack<int> mystack;

	for (int i = 0; i < 5; ++i)
		mystack.push(i);

	std::cout << "Popping out elements...";
	while (!mystack.empty())
	{
		std::cout << ' ' << mystack.top();
		mystack.pop(); // vector에는 없는 pop이 존재함
	}
	std::cout << '\n';

	return 0;
}

// https://www.cplusplus.com/reference/stack/stack/push/