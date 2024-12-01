#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
int visit[10][10],ans;
struct node{
	int x;
	int y;
};
void bfs(int sx,int sy,int ex,int ey){
	node d,D;
	queue<node>q;
	while(!q.empty())q.pop();
	d.x=sx,d.y=sy;
	q.push(d);
	int move[8][2]={-2,1, -2,-1, 2,-1, 2,1, 1,2, -1,2, -1,-2, 1,-2 };
	while(!q.empty()){
		d=q.front();
		q.pop();
		if(d.x==ex && d.y==ey){
			ans=visit[d.x][d.y];
			return ;
		}
		for(int i=0;i<8;i++){
			D.x=d.x+move[i][0];
			D.y=d.y+move[i][1];
			if(!visit[D.x][D.y] && D.x>=1 && D.y>=1 && D.x<=8 && D.y<=8){
				visit[D.x][D.y]=visit[d.x][d.y]+1;
				q.push(D);
			}
		}
	}
}
int main(){
	string s1,s2;
	while(cin>>s1>>s2){
		memset(visit,0,sizeof(visit));
		ans=0;
		int sx,sy,ex,ey;
		sx=s1[1]-'0';ex=s2[1]-'0';
		sy=s1[0]-'a'+1;ey=s2[0]-'a'+1;
		bfs(sx,sy,ex,ey);
		cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<ans<<" knight moves."<<endl;
	}
}