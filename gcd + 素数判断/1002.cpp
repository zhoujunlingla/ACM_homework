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


const int inf = 0x3f3f3f3f;
const int N=3e5+10;




int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s;
    char c;
    while(std::cin >> s >> c){
        if(s.find(c) != std::string::npos){
            std::cout << s.find(c) << std::endl;
        }else{
            std::cout << -1 << std::endl;
        }
    }

    return 0;
}