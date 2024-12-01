#include <iostream>
#include <iomanip>
using namespace std;

const int MAX_N = 20;
long long derangements[MAX_N + 1]; // 用于存储错排数
long long factorial[MAX_N + 1];    // 用于存储阶乘

void preprocess() {
    // 初始化阶乘和错排数组
    factorial[0] = 1;
    derangements[1] = 0;
    derangements[2] = 1;
    for (int i = 1; i <= MAX_N; ++i) {
        factorial[i] = factorial[i - 1] * i;
        if (i > 2) {
            derangements[i] = (i - 1) * (derangements[i - 1] + derangements[i - 2]);
        }
    }
}

int main() {
    preprocess();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        double probability = (double)derangements[n] / factorial[n] * 100;
        cout << fixed << setprecision(2) << probability << "%" << endl;
    }
    return 0;
}