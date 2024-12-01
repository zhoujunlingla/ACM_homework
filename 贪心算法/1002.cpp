#include<iostream>
using namespace std;
struct amount {
    double x, y, z;
};
amount trade[1000];
int main() {
    int m, n;
    cin >> m >> n;
    do {
        double sum(0);
        for (int i = 0; i < n; i++) {
            cin >> trade[i].x >> trade[i].y;
            trade[i].z = trade[i].x / trade[i].y;
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n-i-1;j++)
                if (trade[j].z < trade[j + 1].z)
                {
                    amount temp = trade[j];
                    trade[j] = trade[j + 1];
                    trade[j + 1] = temp;
                }
        while (m != 0) {
            int i;
            for (i = 0; i < n; i++) {
                if (m >= trade[i].y)
                {
                    sum += trade[i].x;
                    m -= trade[i].y;
                }
                else {
                    sum += m / trade[i].y * trade[i].x;
                    m = 0;
                }
            }
            if (i == n)break;
        }
        printf("%.3f\n", sum);
        sum = 0;
        cin >> m >> n;
    } while (m != -1 && n != -1);
}