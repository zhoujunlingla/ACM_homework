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
long long a[52];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    a[1] = 1, a[2] = 2, a[3] = 4,a[4] = 7;
    for(int i = 5; i <= 51; i ++){
        a[i] = a[i - 1] + a[i - 2] + a[i - 4];
    }
    //a[1] M
    //a[2] MM FF
    //a[3] MMM FFF MFF FFM
    //a[4] FFFF  MFFF  MMFF
    while(cin >> n){
        cout << a[n] << endl;
    }
    return 0;
}