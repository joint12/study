#include <iostream>
#include <vector>

int main(void)
{
	// from, to, cost
	std::vector<std::pair<int, int> > adj[10];

	adj[0].push_back(std::make_pair(1, 10));
	adj[0].push_back(std::make_pair(2, 20));
	adj[1].push_back(std::make_pair(2, 30));

	// 역방향 (graph 전용)
	adj[1].push_back(std::make_pair(0, 10));
	adj[2].push_back(std::make_pair(0, 20));
	adj[2].push_back(std::make_pair(1, 30));

	std::cout << "from, to, cost" << std::endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < adj[i].size(); ++j)
		{
			std::cout << i << ", ";
			std::cout << adj[i][j].first << ", ";
			std::cout << adj[i][j].second;
			std::cout << std::endl;
		}
	}

	return 0;
}

// from, to, cost
// 0, 1, 10
// 0, 2, 20
// 1, 2, 30
// 1, 0, 10
// 2, 0, 20
// 2, 1, 30