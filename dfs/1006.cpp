#include<stdio.h>
#include<string.h>
int dp[101][101];
int map[101][101];
int n,m;
int jude(int x,int y)
{
    if(x>=1&&x<=n&&y>=1&&y<=m) return 1;
    return 0;
}
int dfs(int x,int y)
{
    if(dp[x][y]!=-1) return dp[x][y];
    dp[x][y]=0;
    for(int i=0;i<=map[x][y];i++)
    {
        for(int j=0;j<=map[x][y]-i;j++)//表示消耗那个格子的能量能到达的格子；
        {
            if(jude(x+i,y+j))
            {
                dp[x][y]=(dp[x][y]+dfs(x+i,y+j))%10000;
            }
        }
    }
    return dp[x][y];
}
int main()
{ int t;
   scanf("%d",&t);
    while(t--)
   {   scanf("%d%d",&n,&m);
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=m;j++)
           {
               scanf("%d",&map[i][j]);
           }
       }
       memset(dp,-1,sizeof(dp));
       dp[n][m]=1;
    dfs(1,1);
    printf("%d\n",dp[1][1]);
 
     }
 
}