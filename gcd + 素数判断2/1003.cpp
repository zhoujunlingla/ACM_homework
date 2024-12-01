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

int gcd (int x, int y){
    if( y == 0) return x;
    else return gcd( y , x % y);
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while(t --){
        int a , b, c, d;
        cin >> a >> b >> c >>d;
        int q = a * d + b * c;
        int w = b *d;
        cout << q / gcd(q,w) << ' ' << w / gcd(q,w) << endl;

    }

    return 0;
}