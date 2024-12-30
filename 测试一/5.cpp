#include <iostream>
#include <vector>
#include <queue>
#include <cmath>

using namespace std;

struct p {
    int a;
    double b;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    double z, r;
    cin >> n >> z >> r;

    vector<int> g[n];
    double m[n] = {0};
    bool f[n] = {false};

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        if (k == 0) {
            f[i] = true;
            cin >> m[i];
        } else {
            for (int j = 0; j < k; ++j) {
                int x;
                cin >> x;
                g[i].push_back(x);
            }
        }
    }

    queue<p> q;
    q.push({0, z});
    double s = 0;

    while (!q.empty()) {
        p t = q.front();
        q.pop();

        if (f[t.a]) {
            s += t.b * m[t.a];
        } else {
            for (int i : g[t.a]) {
                q.push({i, t.b * (1 - r / 100)});
            }
        }
    }

    cout << (long long)s << endl;
    return 0;
}