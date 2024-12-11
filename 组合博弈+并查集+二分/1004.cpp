#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int k; cin >> k;
        if (k == 0) break; // 输入结束
        vector<int> S(k);
        for (int i = 0; i < k; i++)
            cin >> S[i];

        int m; cin >> m;
        vector<vector<int>> states(m);
        int maxH = 0;
        for (int i = 0; i < m; i++) {
            int C; cin >> C;
            states[i].resize(C);
            for (int j = 0; j < C; j++) {
                cin >> states[i][j];
                maxH = max(maxH, states[i][j]);
            }
        }

        // 计算Grundy值
        vector<int> grundy(maxH+1, 0);
        for (int x = 1; x <= maxH; x++) {
            unordered_set<int> nextStates;
            for (auto s : S) {
                if (x >= s)
                    nextStates.insert(grundy[x - s]);
            }
            // 找mex
            int g = 0;
            while (nextStates.count(g)) g++;
            grundy[x] = g;
        }

        // 对每个状态计算结果
        for (int i = 0; i < m; i++) {
            int xorVal = 0;
            for (auto h : states[i]) {
                xorVal ^= grundy[h];
            }
            if (xorVal == 0) cout << 'L';
            else cout << 'W';
        }
        cout << "\n";
    }

    return 0;
}