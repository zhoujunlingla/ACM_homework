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
bool judge_prime(int x){
    if(x <= 1) return false;
    for(int i = 2; i * i <= x ; i ++){
        if(x % i == 0) return false;
    }
    return true;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int x, y;
    while(cin >> x >> y){
        int flag = 1;
        if(x == 0 && y == 0 ) break;
        for(int i = x; i <= y; i ++){
            int ans = i * i + i + 41;
            if(!judge_prime(ans)){
                flag = 0;
                break;
            }
        }
        if(flag) cout << "OK" << endl;
        else cout << "Sorry" << endl;
    }

    return 0;
}