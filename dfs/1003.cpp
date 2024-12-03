#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
int n , m ,t;
const int N = 10;
char a[N][N];
int sx,sy, ex,ey;
int wall;
bool st[N][N],judge;
int dx[4] = {0, 1, -1 ,0};
int dy[4] = {1, 0, 0, -1};
void dfs(int sx,int sy, int time){
	if(time == t && sx == ex && sy == ey){
		judge = 1;
		return;
	}
	if (time > t || abs(ex - sx) + abs(ey - sy) > t - time) return;
	for(int i = 0; i < 4; i ++){
		int nx = sx + dx[i], ny = sy + dy[i];
		if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && a[nx][ny] != 'X'){
			a[nx][ny] = 'X';
			dfs(nx, ny, time + 1);
			a[nx][ny] = '.';
		}
	}
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> m >> t && n && m && t){
    	wall = 0, judge = 0;
    	for(int i = 1; i <= n ; i ++){
    		for(int j = 1; j <= m ;j  ++){
    			cin >> a[i][j];
    			if(a[i][j] == 'S'){
    				sx = i;
    				sy = j;
    			}else if(a[i][j] == 'D'){
    				ex = i;
    				ey = j;
    			}else if(a[i][j] == 'X'){
    				wall ++;
    			}
    		}
    	}

    	int temp_time = abs(ex - sx) - abs(ey - sy);
    	if(t >= n * m - wall || (t - temp_time) % 2 == 1){
    		cout << "NO" << endl;
    		continue;
    	}else{
    		a[sx][sy] = 'X';
    		dfs(sx, sy , 0);
    		if(judge) cout << "YES" << endl;
    		else cout << "NO" << endl;
    	}
    }
    return 0;
}
