#include <iostream>
using namespace std;
const int N = 1e4 + 10;
int dp[N], w[4];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int c;
    cin >> c;
    while(c --){
    	
    	int m;
    	cin >> m;
    	for(int i = 0; i <= m; i ++){
    		dp[i] = 0;
    	}
    	w[1] = 150, w[2] = 200, w[3] = 350;
    	for(int i = 1; i <= 3; i ++){
    		for(int j = w[i];j <= m ; j ++){
    			dp[j] = max(dp[j] , dp[j - w[i]] + w[i]);
    		}
    	}
    	cout << m - dp[m] << endl;
    }
    return 0;
}
