#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stdlib.h>
#include<cmath>
using namespace std;
#define N 2006
#define inf 2147483646
int n,k;
int a[N];
int dp[N][N];//dp[i][j]表示在前i个选出j对的最小值
int main()
{
    while(scanf("%d%d",&n,&k)==2){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        sort(a+1,a+1+n);
        for(int i=0;i<=n;i++){
            for(int j=1;j<=k;j++){
                dp[i][j]=inf;
            }
        }

        //dp[0][0]=0;
        for(int i=2;i<=n;i++){
            for(int j=1;j*2<=i;j++){
                dp[i][j]=min(dp[i-2][j-1]+(a[i]-a[i-1])*(a[i]-a[i-1]),dp[i-1][j]);
            }
        }
        printf("%d\n",dp[n][k]);
    }
    return 0;
}