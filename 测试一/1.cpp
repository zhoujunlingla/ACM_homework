#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
const int N = 1e3 + 10;
int a[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int maxn = 0;
    while( t --){
    	int n;
    	
    	cin >> n;
    	while(n --){
    		int x;
    		cin >> x;
    		a[x] ++;
    		maxn = max(maxn , a[x]);
    	}
    }
    for(int i = N ; i >= 0; i --){
    		if(a[i] == maxn){
    			cout << i << ' ' << maxn << endl;
    			break;
    		}
    	}
    return 0;
}
