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
struct stu
{
    string name;
    int chi;
    int math;
}a[1003];

bool cmp(stu x, stu y){
    return  abs(x.chi - x.math) > abs(y.chi - y.math);
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n){
        for(int i = 1; i <= n ; i ++){
            cin >> a[i].name >> a[i].chi >> a[i].math;
        }
        sort(a + 1, a + 1 + n , cmp);
        cout << a[1].name << ' ' <<  a[2].name << endl;
    }

    return 0;
}