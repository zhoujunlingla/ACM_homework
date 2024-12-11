#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int n, k ,d,s;
int a[150];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin >> n && n){
    	k = s = 0;
    	for(int i = 1; i <= n ; i ++){
    		cin >> a[i];
    		k ^= a[i];
    	}
    	for(int i = 1; i <= n ; i ++){
    		if((k ^ a[i]) < a[i]){
    			s ++;
    		}
    	}
    	cout << s << endl;
    }
    return 0;
}
