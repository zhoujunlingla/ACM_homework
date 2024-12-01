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
int a[N], b[N];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n && n){
        for(int i = 1; i <= n ;i ++) cin >> a[i];
        for(int i = 1; i <= n ;i ++) cin >> b[i];
        sort(a + 1,a + 1 + n);
        sort(b + 1, b + 1 + n);
        int num = 0;
        int i = n , j = n;
        while(i >= 1 && j >= 1){
            if(a[i] >= b[j]){
                num += 200;
                i --;
                j --;
                if(i < 1 || j < 1) break;
            }else{
                num -= 200;
                j --;
                if(i < 1) break;
            }
        }
        cout << num << endl;
    }

    return 0;
}