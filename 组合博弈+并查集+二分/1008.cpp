#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
const int N = 1e3 , M = 1e5;
int h[N], e[M], ne[M], idx;
int match[N];
bool st[N];

void add(int a, int b){
	e[idx] = b, ne[idx] = h[a], h[a] = idx ++;
}
int n1, n2, m;
bool find(int x){
	for(int i = h[x]; i != -1; i = ne[i]){
		int j = e[i];
		if(!st[j]){
			st[j] = true;
			if(match[j] == 0 || find(match[j])){
				match[j] = x;
				return true;
			}
		}
	}
	return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> m && m){
    	cin >> n1 >> n2;
    	memset(h , -1, sizeof(h));
    	memset(st, false, sizeof(st));
    	memset(match ,0 , sizeof(match));
    	while( m --){
    		int a, b;
    		cin >> a >> b;
    		add(a, b);
    	}
    	int res = 0;
   	 	for(int i = 1; i <= n1 ;i ++){
    		memset(st, false, sizeof(st));
    		if(find(i)) res ++;
    	}
    	cout << res << endl;
    }
    
    return 0;
}
