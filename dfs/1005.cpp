#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
int n, k;
const int N = 105;
int a[N][N], memory[N][N];
bool st[N][N];
int dx[] = { 0 , 1, -1 , 0};
int dy[] = { 1, 0 , 0, -1};

int dfs(int x,int y){
	if(memory[x][y] != -1) return memory[x][y];
	int max_cheese = a[x][y];
	for(int i = 0 ; i < 4; i ++){
		for(int j = 1; j <= k ; j ++){
			int nx = x + j * dx[i];
			int ny = y + j * dy[i];
			if(nx < 1 || nx > n || ny < 1 || ny > n) break;
			if(a[nx][ny] > a[x][y]){
				max_cheese = max(max_cheese, a[x][y] + dfs(nx,ny));
			} 
		}
	}
	return memory[x][y] = max_cheese;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n >> k){
    	memset(memory, -1, sizeof(memory));
    	if(n == -1 && k == -1) break;
    	for(int i = 1; i <= n ; i ++){
    		for(int j = 1; j <= n ; j ++){
    			cin >> a[i][j];
    		}
    	}
    	cout << dfs(1 ,1) << endl;
    }
    return 0;
}
