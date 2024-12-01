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
long long a[42];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    a[1] = 3, a[2] = 8;
    for(int i = 3;  i <= 41 ;i ++){
        a[i] = a[i - 1] * 2 + a[i - 2] * 2;
    }
    while(cin >> n){
        cout << a[n] << endl;
    }

    return 0;
}