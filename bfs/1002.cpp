#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<queue>
 
using namespace std;
bool maps[200001];
int x, y;
struct node {
    int x, t;
};                  
 
int bfs() {
    queue<node> q;
    node now, next;
    now.x = x, now.t = 0;
    maps[now.x] = 1;
    q.push(now);
    while (!q.empty()) {
        now = q.front();
        q.pop();
        if (now.x == y)
            return now.t;
        next.x = now.x - 1;
        if (now.x >= 1 && !maps[next.x]) {
            next.t = now.t + 1;
            maps[next.x] = 1;
            q.push(next);
        }
        next.x = now.x + 1;
        if (now.x <= y && !maps[next.x]) {
            next.t = now.t + 1;
            maps[next.x] = 1;
            q.push(next);
        }
        next.x = now.x * 2;
        if (now.x <= y && !maps[next.x]) {
            next.t = now.t + 1;
            maps[next.x] = 1;
            q.push(next);
        }
    }
}
 
int main() {
    while (scanf("%d%d", &x, &y) != EOF) {
        memset(maps, 0, sizeof(maps));
        if (x >= y)
            printf("%d\n", x - y);
        else
            printf("%d\n", bfs());
    }
    return 0;
}