#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int N = 25; 
char a[N][N];     
bool visited[N][N]; 

int n, m;          
int start_x, start_y; 

// 四个方向
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};


int bfs(int start_x, int start_y) {
    queue<pair<int, int>> q;
    q.push({start_x, start_y});
    visited[start_x][start_y] = true;

    int count = 1; 

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m &&
                !visited[nx][ny] && a[nx][ny] == '.') {
                visited[nx][ny] = true;
                q.push({nx, ny});
                count++; 
            }
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (cin >> m >> n && m && n) {
        memset(visited, false, sizeof(visited));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
                if (a[i][j] == '@') {
                    start_x = i;
                    start_y = j; 
                }
            }
        }

        int result = bfs(start_x, start_y);
        cout << result << endl;
    }

    return 0;
}