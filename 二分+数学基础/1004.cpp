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


long long qmi(int a, int b, int p){
    long long res = 1 % p;
    while(b){
        if(b & 1) res = (long long)res * a %p;
        a =(long long) a * a % p;
        b >>= 1;
    }
    return res;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a, b;
    while(cin >> a >> b && a && b){
        cout << qmi(a, b, 1000) << endl;
    }

    return 0;
}