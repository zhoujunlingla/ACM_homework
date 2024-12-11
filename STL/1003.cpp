#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    while (cin >> n >> m) {
        set<int> s;  

        while (n--) {
            int x;
            cin >> x;
            s.insert(x);
        }
        while (m--) {
            int x;
            cin >> x;
            s.insert(x);
        }
        for (auto it = s.begin(); it != s.end(); ++it) {
            if (it != s.begin()) cout << " ";  
            cout << *it;
        }
        cout << endl;
    }

    return 0;
}