#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
const int N = 10;
int a[N];
bool vis[N];
int n;

void dfs(int x){
	if(x == n + 1){
		for(int i = 1 ; i <= n; i ++) cout << a[i] << ' ';
		cout << endl;
		return;
	}
	for(int i = 1; i <= n ; i ++){
		if(!vis[i]){
			a[x] = i;
			vis[i] = 1;
			dfs(x + 1);
			vis[i] = 0;
			a[x] = 0;
		}
	}

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n){
    	dfs(1);
    }
    return 0;
}
