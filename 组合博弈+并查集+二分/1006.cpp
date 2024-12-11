#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
const int N = 1e5 + 10;
int p[N];

int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n , m;
    while(cin >> n >> m){
    	int maxn = n - 1;
    	for(int i = 1; i <= n ;i ++){
    		p[i] = i;
    	}
    	while(m --){
    		int a,b;
    		cin >> a >> b;
    		a = find(a), b = find(b);
    		if(a == b) continue;
    		p[a] = b;
    		maxn --;
    	}
    	
    	cout << maxn  << endl;
    }
    return 0;
}
