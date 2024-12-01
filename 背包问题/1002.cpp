#include <iostream>
using namespace std;

const int N = 1005;
int w[N], v[N], dp[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m, n;
    while(cin >> m >> n){
    	for(int j = 0; j <= m ; j ++) dp[j] = 0;
    	if(m == -1 && n == -1 ) break;
    	for(int i = 1; i <= n ; i ++) cin >> w[i] >> v[i];
    	for(int i = 1; i <= n ; i ++){
    		for(int j = m; j >= v[i] ; j --){
    			dp[j] = max(dp[j] , dp[j - v[i]] + w[i]);
    		}
    	}	
    	cout << dp[m] << endl;
    }
    return 0;
}
