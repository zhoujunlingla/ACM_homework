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
const int N=1e5+10;
int a[N];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    cin >> T;
    a[1] = 2; a[2] = 7;
    for(int i = 3; i <= 1e4 + 10; i ++){
        a[i] = a[i - 1] + 9(n - 1) + 1;
    }

    while(T --){
        int n ;
        cin >> n;
        cout << 2 *n *n - n + 1;
    }

    return 0;
}