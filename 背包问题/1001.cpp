#include <iostream>
using namespace std;
const int N = 1e3 + 10;
int value[N],volume[N], dp[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while( t --){

    	int n , v;
    	cin >> n >> v;
    		for(int j = 0 ; j <= v; j ++){
    			dp[j] = 0;
    		}
    	for(int i = 1; i <= n ; i ++) cin >> value[i];
    	for(int i = 1; i <= n ; i ++) cin >> volume[i];
    	for(int i = 1; i <= n ; i ++){
    		for(int j = v; j >= volume[i]; j --){
    			dp[j] = max(dp[j] , dp[j - volume[i]] + value[i]);
    		}
    	}
    	cout << dp[v] << endl;
    }
    return 0;
}
