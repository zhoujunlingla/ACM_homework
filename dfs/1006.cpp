#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

const int N = 105, int MOD = 10000;
int n , m;
int dx[] = {0 , 1};
int dy[] = {1,  0};
int grid[N][N];
int memory[N][N][25];
int dfs(int x, int y , int energy){
	if(x == n && y == m ){
		return 1;
	}
	if(energy <= 0){
		return 0;
	}
	if(memory[x][y][energy] != -1){
		return memory[x][y][energy];
	}
	int path = 0;
	for(int i = 0 ; i < 2; i ++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx >= 1 && nx <= n  && ny >= 1 && ny >= n){
			path = (path + dfs(nx, ny, grid[nx][ny])) % MOD;
		}
	}
	return memory[x][y][energy] = path;
}	


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while(T --){
    	memset(memory, -1, sizeof(memory));
    	cin >> n >> m;
    	for(int i = 1; i <= n ; i ++){
    		for(int j = 1; j <= m ; j ++){
    			cin >> grid[i][j];
    		}
    	}
    	cout << dfs(1, 1, grid[1][1]);
    }
    return 0;
}
