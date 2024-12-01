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

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    while( t --){
        int x;
        cin >> x;
        while(x % 2 == 0) x /= 2;
        while(x % 3 == 0) x/= 3;
        while(x % 5 == 0) x /= 5;
        while(x % 7 == 0) x /= 7;
        if(x == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}