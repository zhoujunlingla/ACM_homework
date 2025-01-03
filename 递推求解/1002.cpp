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
long long a[50];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    cin >> T;
    a[1] = 1,a[2] = 2, a[3] = 3;
    for(int i = 4; i <= 50; i ++){
        a[i] += a[i - 1] + a[i - 2];
    }
    while(T --){
        int x, b;
        cin >> x >> b;
        cout << a[b - x] << endl;
    }

    return 0;
}