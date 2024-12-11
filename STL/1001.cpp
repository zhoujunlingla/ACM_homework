#include <bits/stdc++.h>
using namespace std;
const int maxn = 510;
vector<int> g[maxn], ans;
int n, m, indegrees[maxn], a, b;
int main() {
	while (~scanf("%d%d", &n, &m)) {
		for (int i = 0; i < maxn; ++i) g[i].clear();
		ans.clear();
		memset(indegrees, 0, sizeof(indegrees));
		
		for (int i = 0; i < m; ++i) {
			scanf("%d%d", &a, &b);
			g[a].push_back(b);
			++indegrees[b];
		}
		priority_queue<int, vector<int>, greater<int>> q;
		for (int i = 1; i <= n; ++i) if (indegrees[i] == 0) q.push(i);
		while (!q.empty()) {
			int u = q.top(); q.pop();
			ans.push_back(u);
			for (const int &v : g[u]) if (--indegrees[v] == 0) q.push(v);
		}
		for (int i = 0; i < ans.size(); ++i) printf(" %d" + !i, ans[i]); 
		printf("\n");
	}
	return 0;
} 
