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
struct node
{
    double p,h;
}a[N];

bool cmp(node x, node y){
    return x.p < y.p;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t --){
        double  m;
        int n;
        cin >> m >> n;
        for(int i = 1; i <= n ; i ++){
            cin >> a[i].p >> a[i].h;
        }
        sort(a + 1, a + 1 + n, cmp);
        double sum = 0;
        for(int i = 1; i <= n ;i ++){
            if(m >= a[i].p * a[i].h){
                m -= a[i].p * a[i].h;
                sum += a[i].h;
            }else{
                sum += (double)(m / a[i].p);
                break;
            }
        }
        cout << fixed << setprecision(2) << sum << endl;
    }

    return 0;
}