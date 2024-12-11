#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t --){
    	int n,m;
    	cin >> n >> m;
    	if(n % (m + 1) == 0){
    		cout << "second" << endl;
    	}else{
    		cout << "first" << endl;
    	}
    }
    return 0;
}
