#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    while(n --){
    	char c; double x;
    	cin >> c >> x;
    	if(c == 'M'){
    		cout << fixed << setprecision(2) << x / 1.09 << endl;
    	}else{
    		cout << fixed << setprecision(2) << x * 1.09 << endl;
    	}
    }
    return 0;
}
