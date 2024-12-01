#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX_ROOMS = 200;  // 房间数最大为200
const int MAX_SEGMENTS = 201;  // 走廊段数

int corridor[MAX_SEGMENTS];  // 用于记录每段走廊的最大并发数

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        // 初始化走廊段的使用情况
        memset(corridor, 0, sizeof(corridor));

        for (int i = 0; i < n; i++) {
            int s, t;
            cin >> s >> t;

            int start = (min(s, t) + 1) / 2;  // 起始走廊段
            int end = (max(s, t) + 1) / 2;    // 结束走廊段

            // 标记该搬运任务涉及的走廊段
            for (int j = start; j <= end; j++) {
                corridor[j]++;
            }
        }

        // 计算所有走廊段的最大并发数
        int max_concurrent = 0;
        for (int i = 1; i < MAX_SEGMENTS; i++) {
            max_concurrent = max(max_concurrent, corridor[i]);
        }

        // 输出结果，最少需要的时间
        cout << max_concurrent * 10 << endl;
    }

    return 0;
}