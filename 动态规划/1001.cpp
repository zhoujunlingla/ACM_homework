#include <iostream>
using namespace std;
const int N = 105;
int a[N][N],dp[N][N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t --){
    	memset(dp, 0 ,sizeof(dp));
    	int n;
    	cin >> n;
    	
    	for(int i = 1; i <= n ;i ++){
    		for(int j = 1; j <= i ; j ++){
    			cin >> a[i][j];
    		}
    	}
 
    	dp[1][1] = a[1][1];
    	for(int i = 2; i <= n ;i ++){
    		for(int j = 1; j <= i ;j ++){
    			dp[i][j] = a[i][j] + max(dp[i - 1][j], dp[i - 1][j - 1]);
    		}
    	}
    	int ans = 0;
    	for(int j = 1; j <= n ;j ++){
    		ans = max(ans, dp[n][j]);
    	}
    	cout << ans << endl;
    }
    return 0;
}
