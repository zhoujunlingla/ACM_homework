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

double f(double x){
    return 8 * pow(x, 4) + 7 * pow(x , 3) + 2 * pow(x, 2) + 3 * x + 6;
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    cin >> T;
    while( T --){
        double y ;
        cin >> y;
        double left = 0.0, right = 100.0;
        double mid;
        bool found = 0;
        if(f(left) > y || f(right) < y){
            cout << "No solution!" << endl;
            continue;
        }

        while(right - left > 1e-7){
            mid = (left + right ) / 2.0;
            double fy = f(mid);
            if(fabs(fy - y) < 1e-7){
                found = true;
            }else if(fy >= y){
                right = mid;
            }else{
                left = mid;
            }
        }
        if(found || (right - left <= 1e-7)){
            cout << fixed << setprecision(4) << mid << endl;
        }else{
            cout << "No solution!" << endl;
        }
    }

    return 0;
}