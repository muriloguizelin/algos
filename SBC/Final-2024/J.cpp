#include <bits/stdc++.h>

#define PI 3.14159265358979323846

using namespace std;
//https://codeforces.com/gym/105505/problem/J
int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int ang, n;
    cin >> ang >> n;

    vector<pair<double, double>> intervals;
    double theta = ang * PI / 180.0;
    double cot_theta = cos(theta) / sin(theta);

    while (n--) {
        int x, h;
        cin >> x >> h;
        double L = h * cot_theta;
        intervals.push_back({x, x + L});
    }

    sort(intervals.begin(), intervals.end());

    double total_shadow_length = 0;
    double current_end = 0;

    for (auto [start, end] : intervals) {
        if (end > current_end) {
            total_shadow_length += end - max(current_end, start);
            current_end = end;
        }
    }

    cout << fixed << setprecision(5) << total_shadow_length << '\n';

    return 0;
}
