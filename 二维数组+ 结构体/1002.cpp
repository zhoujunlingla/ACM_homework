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
double a[100][100];
double stu[100];
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n , m ;
    while(cin >> n >> m){

        for(int j = 1; j <= m ; j ++){
            stu[j] = 0;
        }
        for(int i = 1; i <= n; i ++){
            for(int j = 1; j <= m ; j ++){
                cin >> a[i][j];
                stu[j] += a[i][j];
            }
        }
        for(int j = 1; j <= m ;j ++){
            stu[j] /= n;
         }

        int sum = 0;
        for(int i = 1; i <= n ;i ++){
            int flag = 1;
            for(int j = 1; j <= m ;j ++){
                if(a[i][j] < stu[j]){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) sum ++;
        }
        cout << sum << endl;
    }


    return 0;
}