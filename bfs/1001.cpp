#include <iostream>
#include <queue>
#include <cstring>
using namespace std;
const int N = 205;
int a[N],vis[N];
int dir[2] = {1, -1};
int fir, las , n;
struct edge{
	int lift,step;
}t,p[201];
int dfs(){
	queue<edge> q;
	memset(vis, 0, sizeof(vis));
	vis[fir] = 1;
	q.push({fir, 0});
	while(!q.empty()){
		t = q.front();
		q.pop();
		if(t.lift == las) return t.step;
		for(int i = 0 ; i < 2 ;i ++){
			int tx = t.lift + dir[i] * a[t.lift];
			if(tx > 0 && tx <= n && !vis[tx]){
				vis[t.lift] = 1;
				q.push({tx, t.step + 1});
			}
		}
	}
	return -1;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> fir >> las){
    	for(int i = 1; i <= n ; i ++){
    		cin >> a[i];
    	}

    	cout << dfs() << endl;
    }
    return 0;
}
