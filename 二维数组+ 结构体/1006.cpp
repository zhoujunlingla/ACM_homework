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
    int year;
    int month;
    int day;
}a[1003];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    while(cin >> n){
        for(int i = 1; i <= n ; i ++){
            cin >> a[i].name >> a[i].year >> a[i].month >> a[i].day;
        }
        int e , b, c, d;
        cin >> e >> b >> c >> d;
        for(int i = 1; i <= n ; i ++){
            if(a[i].month < e || a[i].month > c) continue;
            else{
                if(a[i].month == e && e == c ){
                    if(a[i].day >= b && a[i].day <= d){
                        cout << a[i].name << ' ';
                    }else{
                        continue;
                    }
                }
                else{
                    if(a[i].month == e){
                        if(a[i].day >= b) cout << a[i].name << ' ';
                        else continue;
                    }else if(a[i].month == c){
                        if(a[i].day <= d) cout << a[i].name << ' ';
                        else continue;
                    }else{
                        cout << a[i].name << ' ';
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}