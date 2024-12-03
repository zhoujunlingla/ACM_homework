#include <iostream>
#include <cstring>
#include <string>
#include <queue>
using namespace std;
void hanoi(int n, char from, char to, char aux){
	if(n == 1){
		cout << "Move disk 1 from " << from << " to " << to << endl;
		return;
	}
	hanoi(n - 1, from, aux, to);
	cout << "Move disk " << n << " from " << from << " to " << to << endl;
	hanoi(n - 1, aux, to , from);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
    	hanoi(n, 'A','B','C');
    	cout << endl;
    }
    return 0;
}
