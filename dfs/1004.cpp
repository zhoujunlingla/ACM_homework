#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
int n, m;
const int N = 200;
char a[N][N];
bool st[N][N];
int dx[8] = {0 , 1, 0 , -1, -1, -1, 1, 1};
int dy[8] = {1,  0 , -1 , 0, -1, 1, 1 , -1};
void dfs(int st_x,int st_y){
  st[st_x][st_y] = 1;
	for(int i = 0; i < 8; i ++){
		int nx = st_x + dx[i], ny = st_y + dy[i];
		if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && !st[nx][ny] && a[nx][ny] == '@'){
			dfs(nx, ny);
		}
	}
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> m && n && m){
    	memset(st, false, sizeof(st));
    	for(int i = 1; i <= n ;i ++){
    		for(int j = 1; j <= m ; j ++){
    			cin >> a[i][j];
    		}
    	}
    	int ans = 0;
    	for(int i = 1; i <= n ; i ++){
    		for(int j = 1; j <= m; j ++){
    			if(a[i][j] == '@' && !st[i][j]){
    				dfs(i , j);
    				++ ans ;
    			}
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}
