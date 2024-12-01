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

int primes[N] , cnt;
bool st[N];

void get_primes(int n){
    for(int i = 2; i <= n ;i ++){
        if(st[i]) continue;
        primes[cnt ++] = i;
        for(int j = i + i; j <= n ;j += i) st[j] = true;
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n){
        cnt = 0;
        get_primes(n);
        cout << cnt << endl;
    }

    return 0;
}