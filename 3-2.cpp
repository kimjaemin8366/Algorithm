#include <iostream>
#include <vector>

using namespace std;

int n;
int cost = 0;
int ch[2000];
vector<pair<int, int>> map[2000];

void DFS(int v, int sum)
{
	if (v == n)
	{
		if (cost < sum) cost = sum;
	}
	else
	{
		for (int i = 0; i < map[v].size(); ++i)
		{
			if (ch[map[v][i].first] == 0)
			{
				ch[map[v][i].first] = 1;
				DFS(map[v][i].first, sum + map[v][i].second);
				ch[map[v][i].first] = 0;
			}
		}
	}
}

int main(void)
{
	int n, T, u, v, d;
	cin >> T >> n;
	while (T > 0) {
		
		for (int i = 1; i <= n; ++i)
		{
			cin >> u >> v >> d;
			map[u].push_back(make_pair(v, d));
		}

		ch[1] = 1;
		DFS(1, 0);

		cout << cost << "\n";

		T--;
	}

	return 0;
}