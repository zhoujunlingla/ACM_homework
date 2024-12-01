#include<bits/stdc++.h>
using namespace std;
char a[210][210];
int vis[210][210];
struct node{int x,y,step;};
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int main(){
	int n, m;
	while(cin>>n>>m){
		memset(vis,0,sizeof(vis));
		int sx, ed;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin>>a[i][j];
				if(a[i][j]=='a'){sx=i;ed=j;}
			}
		}
		int ans = 1e9+10;
		queue<node>q; q.push(node{sx,ed,0});
		while(q.size()){
			node t = q.front(); q.pop();
			if(a[t.x][t.y]=='r')ans = min(ans,t.step);
			for(int i = 0; i < 4; i++){
				int nx = t.x+dx[i], ny = t.y+dy[i];
				if(nx<1||nx>n||ny<1||ny>m||vis[nx][ny]||a[nx][ny]=='#')continue;
				if(a[nx][ny]=='x')q.push(node{nx,ny,t.step+2});
				else q.push(node{nx,ny,t.step+1});
				vis[nx][ny] = 1;
			}
		}
		if(ans==1e9+10)cout<<"Poor Dingba has to stay in the prison all his life.\n";
		else cout<<ans<<"\n";
	}
	return 0;
}

