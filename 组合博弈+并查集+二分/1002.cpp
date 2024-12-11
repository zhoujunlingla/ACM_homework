#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
    	if(n % 3 == 0){
    		cout << "Cici" << endl;
    	}else{
    		cout << "Kiki" << endl;
    	}
    }
    return 0;
}
