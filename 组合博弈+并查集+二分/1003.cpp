#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m;
    while(cin >> m){
    	if(m == 0) break;
    	int ans = 0;
    	for(int i = 1; i <= m ; i ++){
    		int x;
    		cin >> x;
    		ans ^= x;
    	}
    	if(ans == 0){
    		cout << "Grass Win!" << endl;
    	}else{
    		cout << "Rabbit Win!" << endl;
    	}
    }
    return 0;
}
