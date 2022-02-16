#include <vector>
#include <iostream>
#include <queue>

#define MAX 100        // 최대 정점의 개수 
#define INF 99999999

std::vector<int> dijkstra(int start, int V, std::vector<std::pair<int, int> > adj[])
{
	std::vector<int> dist(V, INF);    // 전부 INF로 초기화 
	std::priority_queue<std::pair<int, int> > pq;

	dist[start] = 0;
	pq.push(std::make_pair(0, start));    // 시작 정점 방문 

	while (!pq.empty())
	{
		int cost = -pq.top().first;    // 방문한 정점의 dist 값 
		int cur = pq.top().second;    // 현재 방문한 정점 
		pq.pop();

		for (int i = 0; i < adj[cur].size(); i++)     // 현재 방문한 정점의 주변 정점 모두 조사 
		{
			int next = adj[cur][i].first;    // 조사할 다음 정점 
			int nCost = cost + adj[cur][i].second;    // 현재 방문한 정점을 거쳐서 다음 정점을 갈때의 비용 
			if (nCost < dist[next])      // 기존 비용보다 현재 방문한 정점을 거친 비용이 더 싸다면 
			{
				dist[next] = nCost;    // 갱신 
				pq.push(std::make_pair(-nCost, next));    // pq에 저장 
			}
		}
	}

	return dist;
}

int main()
{
	std::vector<std::pair<int, int> > adj[MAX];
	int V = 5;
	int E = 8;

	for (int i = 0; i < E; i++)
	{
		int from, to, cost;
		if (i == 0)
		{
			from = 0; to = 1; cost = 5;
		}
		else if (i == 1)
		{
			from = 0; to = 2; cost = 3;
		}
		else if (i == 2)
		{
			from = 0; to = 3; cost = 7;
		}
		else if (i == 3)
		{
			from = 1; to = 2; cost = 4;
		}
		else if (i == 4)
		{
			from = 2; to = 3; cost = 3;
		}
		else if (i == 5)
		{
			from = 1; to = 4; cost = 7;
		}
		else if (i == 6)
		{
			from = 2; to = 4; cost = 8;
		}
		else if (i == 7)
		{
			from = 3; to = 4; cost = 4;
		}

		adj[from].push_back(std::make_pair(to, cost));
		adj[to].push_back(std::make_pair(from, cost));
	}

	printf("\n===다익스트라 결과===\n");
	std::vector<int> dist = dijkstra(0, V, adj);
	for (int i = 0; i < V; i++)
	{
		printf("0번 정점에서 %d번 정점까지 최단거리 : %d\n", i, dist[i]);
	}
	return 0;
}

// https://code-lab1.tistory.com/29

// == = 다익스트라 결과 == =
// 0번 정점에서 0번 정점까지 최단거리 : 0
// 0번 정점에서 1번 정점까지 최단거리 : 5
// 0번 정점에서 2번 정점까지 최단거리 : 3
// 0번 정점에서 3번 정점까지 최단거리 : 6
// 0번 정점에서 4번 정점까지 최단거리 : 10