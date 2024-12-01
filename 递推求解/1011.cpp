#include<stdio.h>
long long a[100];
int f(int,int);
long long fun(int);
int main()
{
    int n,m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        printf("%lld\n",f(n,m)*fun(m));
    }
    return 0;
}
long long fun(int n)
{
    int i;
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++)
        a[i]=i*(a[i-1]+a[i-2]);
    return a[n-1];
}
int f(int n,int m)
{
    int s=1,i;
    for(i=1;i<=m;i++)
        s=s*(n-i+1)/i;
    return s;
}
