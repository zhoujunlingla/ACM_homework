#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>

using i64 = long long;
using namespace std;


const int inf = 0x3f3f3f3f;
const int N=3e5+10;

struct node{
    int start, end;
}a[N];

bool cmp(node x, node y){
    return x.end < y.end;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n && n){
        for(int i = 1; i <= n ; i ++){
            cin >> a[i].start >> a[i].end;
        }

        sort(a + 1,a + 1 + n, cmp);
        int time = 0;
        int ans = 0;
        for(int i = 1; i <= n ;i ++){
            if(a[i].start >= time){
                time = a[i].end;
                ans ++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}