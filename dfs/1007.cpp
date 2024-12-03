#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

bool canDistribute(const vector<double>& areas, double area, int totalPeople) {
    int count = 0;
    for (double a : areas) {
        count += floor(a / area);  
    }
    return count >= totalPeople;
}

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N, F;
        cin >> N >> F;

        vector<double> areas(N);
        double maxArea = 0;

        for (int i = 0; i < N; ++i) {
            double radius;
            cin >> radius;
            areas[i] = M_PI * radius * radius;
            maxArea = max(maxArea, areas[i]);  
        }

        double low = 0, high = maxArea;
        double epsilon = 1e-6;  
        while (high - low > epsilon) {
            double mid = (low + high) / 2;
            if (canDistribute(areas, mid, F + 1)) {
                low = mid;  
            } else {
                high = mid;  
            }
        }

        cout << fixed << setprecision(4) << low << endl;
    }

    return 0;
}