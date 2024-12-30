#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a, a + n);

    long long tsum = 0, g1sum = 0;
    for (int i = 0; i < n; ++i) {
        tsum += a[i];
    }

    int index = n / 2;
    for (int i = index; i < n; ++i) {
        g1sum += a[i];
    }

    long long g2sum = tsum - g1sum;

    cout << "Outgoing #: " << (n - index) << endl;
    cout << "Introverted #: " << index << endl;
    cout << "Diff = " << abs(g1sum - g2sum) << endl;

    return 0;
}