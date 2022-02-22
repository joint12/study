// 아래 코드랑 관계 없고, 그림 설명이 좋음. https://www.programiz.com/dsa/graph-dfs

#include <iostream>

#define MAX_VERTEX 20

int num_vertex; // 정점의 개수
int map[MAX_VERTEX][MAX_VERTEX];
bool visit[MAX_VERTEX];

void DepthFirstSearch(int v)
{
	visit[v] = true;
	for (int i = 0; i <= num_vertex; ++i) // 정점이 1부터 시작해서 <= 이다.
	{
		if (map[v][i] == 1 && !visit[i])
		{
			std::cout << i << ", "; // 방문한 정점 출력
			DepthFirstSearch(i);
		}
	}
}

void AddEdge(int v1, int v2)
{
	map[v1][v2] = 1;
	map[v2][v1] = 1;
}

void PrintMap()
{
	for (int i = 0; i < MAX_VERTEX; ++i)
	{
		for (int j = 0; j < MAX_VERTEX; ++j)
		{
			std::cout << map[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

int main(void)
{
	num_vertex = 8; // 정점 개수
	int start = 1; // 시작 정점

	// 초기화
	for (int i = 0; i < MAX_VERTEX; ++i)
	{
		for (int j = 0; j < MAX_VERTEX; ++j)
		{
			map[i][j] = 0;
		}
		visit[i] = false;
	}

	// 정점 추가
	AddEdge(1, 2);
	AddEdge(1, 3);
	AddEdge(2, 4);
	AddEdge(2, 5);
	AddEdge(4, 8);
	AddEdge(5, 8);
	AddEdge(3, 6);
	AddEdge(3, 7);
	AddEdge(6, 8);
	AddEdge(7, 8);

	PrintMap();
	DepthFirstSearch(start);
}

// output:
// 2, 4, 8, 5, 6, 3, 7,