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
    int T;
    cin >> T;
    while(T --){
        double a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        double s1, s2, s3;
        s1 = a * a;
        s2 = b * c ;
        s3 = (double) d * e / 2;
        double maxn = max(s1,max(s2 , s3));
        if( maxn == s1) cout << "Perch" << endl;
        else if(maxn == s2) cout << "Semon" << endl;
        else cout << "Belinda" << endl;
    }

    return 0;
}