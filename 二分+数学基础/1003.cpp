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
const int N=1e6+10;
int fib_mod_3[16] = {1, 2, 0, 2, 2, 1, 0, 1, 1, 2, 0, 2, 2, 1, 0, 1};
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    long long n;

    while(cin >> n){
        if(fib_mod_3[n % 16] == 0) cout << "yes" << endl;
        else cout << "no" << endl;
    }

    return 0;
}