
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
int a[13][13];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n, m;
    while(cin >> n >> m){
        for(int i = 1; i <= n ;i ++){
        for(int j = 1; j <= m ; j ++){
            cin >> a[i][j];
        }
    }

    int x;
    cin >> x;
    int flag = 0;
    for(int i = 1; i <=n ;i  ++){
        for(int j = 1; j <= m ; j ++){
            if(a[i][j] == x){
                cout << i << ' ' << j << endl;
                flag = 1;
            }
        }
    }
    if(!flag) cout << -1 << ' ' << -1 << endl;
    }


    return 0;
}