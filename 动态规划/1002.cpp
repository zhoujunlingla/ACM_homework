#include <iostream>
using namespace std;

int dp[100500][20];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while( cin >> n){
    	for(int i = 0 ; i < 100500; i ++){
            for(int j = 0; j < 20; j ++){
                dp[i][j] = 0;
            }
        }
        if(n == 0) break;
        int maxn = 0;
        for(int i = 1;i <= n ; i ++){
            int x, t;
            cin >> x >> t;
            dp[t][x] ++;
            maxn = max(maxn,t);
        }
        for(int i = maxn - 1; i >= 0; i --){
            for(int j = 0; j <= 10; j ++){
                dp[i][j] = dp[i][j] + max(dp[i + 1][j + 1], max(dp[i + 1][j - 1],dp[i + 1][j]));
            }
        }
        cout << dp[0][5] << endl;
    }
    return 0;
}
