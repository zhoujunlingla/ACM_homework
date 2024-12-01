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

int a[N];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n){
        for(int i = 1; i <= n ;i  ++) cin >> a[i];
    for(int i = 1; i <= n ; i ++){
        a[i] += a[i - 1];
    }
    for(int i = 1; i <= n ;i  ++){
        if(i != n)cout << a[i] << ' ';
        else cout << a[i];
    }
    cout << endl;
    }

    return 0;
}