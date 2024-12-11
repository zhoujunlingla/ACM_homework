#include<iostream>
#include<algorithm>
using namespace std;
int p[105],r[105];
int n,ans;
struct node
{
  int x;
  int y;
  int v;
}a[100005];
bool cmp(node b,node c)
{
  return b.v<c.v;
}
int find(int x)//查找元素x的老板是谁
{
    if (x == p[x])
        return x;
    else
        return p[x] = find(p[x]);
}

void join(int x, int y)//合并两个集合
{
    int xRoot = find(x);
    int yRoot = find(y);

    if (xRoot == yRoot) //老板相同，不合并
        return;
    if (r[xRoot] < r[yRoot]) //r[i]是元素i所在树的高度，矮树的根节点认高树的根节点做老板
        p[xRoot] = yRoot;
    else if (r[xRoot] > r[yRoot])
        p[yRoot] = xRoot;
    else
    {
        p[yRoot] = xRoot;//树高相同，做老板的树高度要加一
        r[xRoot]++;
    }
}
void kruskal()
{
  for(int i=1;i<=n;i++)//初始化根节点
    p[i]=i;
  sort(a+1,a+n*(n-1)/2+1,cmp);
  for(int i=1;i<=n*(n-1)/2;i++)
  {
    if(find(a[i].x)!=find(a[i].y))
    {
      join(a[i].x,a[i].y);
      ans=ans+a[i].v;
    }
  }
}
int main()
{
  while(~scanf("%d",&n))
  {
    ans=0;
    if(n==0)
      break;
    else
    {
      for(int i=1;i<=n*(n-1)/2;i++)
        scanf("%d %d %d",&a[i].x,&a[i].y,&a[i].v);
        //cin>>a[i].x>>a[i].y>>a[i].v;
      kruskal();
    }
    printf("%d\n",ans);
    //cout<<ans<<endl;
  }
  return 0;
}