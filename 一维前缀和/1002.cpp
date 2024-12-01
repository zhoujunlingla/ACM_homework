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


const int inf = 0x3f3f3f3f;
const int N=3e5+10;
int a[N];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n , m;
    while(cin >> n >> m){
        for(int i = 1; i <= n ;i ++) cin >> a[i];
        for(int i = 1; i <= n ;i ++){
            a[i] += a[i - 1];
        }
        int sum = 0;
        for(int i = m; i <= n - m ;i ++){
            sum = max(sum , a[i] - a[i - m]);
        }
        cout << sum << endl;
    }

    return 0;
}