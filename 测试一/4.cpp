#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct d {
    string a;
    int b;
};

bool compare(const d &x, const d &y) {
    return x.a < y.a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    d b[m];

    long long c = 0;
    for (int i = 0; i < m; ++i) {
        cin >> b[i].a >> b[i].b;
        c += b[i].b;
    }

    double d = (double)c / m;

    sort(b, b + m, compare);

    bool e = false;
    for (int i = 0; i < m; ++i) {
        bool f = false;
        if (b[i].b > d) {
            for (int j = 0; j < n; ++j) {
                if (b[i].a == a[j]) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                e = true;
                cout << b[i].a << endl;
            }
        }
    }

    if (!e) {
        cout << "Bing Mei You" << endl;
    }

    return 0;
}