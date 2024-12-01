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
long long a[51];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    a[1] = 3, a[2] = 6,a[3] = 6,a[4] = 18;
    // 1 R, P ,G
    // 2 RP, RG, PR, PG, GP, GR
    // 3 RPG, RGP, PRG, PGR, RPG, RGP
    // 4 RPGP, RGPG,RPRP, RGRG,RPRG,RGRP
    for(int i = 4 ; i <= 50;i ++){
        a[i] = a[i - 1] + 2 * a[i - 2];
    }
    while(cin >> n){
        cout << a[n] << endl;
    }

    return 0;
}