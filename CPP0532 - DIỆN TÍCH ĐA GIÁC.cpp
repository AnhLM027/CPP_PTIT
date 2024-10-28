#include <bits/stdc++.h>
using namespace std;


double Area(vector<pair<double, double>> dg, int n) {
    double ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        ans += dg[i].first * dg[i + 1].second - dg[i].second * dg[i + 1].first;
    }
    ans += dg[n].first * dg[1].second - dg[n].second * dg[1].first;
    return (double)ans / 2;
}

int main() {
    int te; cin >> te;
    while (te--) {
        int n; cin >> n;
        vector<pair<double, double>> dg;
        dg.push_back({ -1, -1 });
        for (int i = 1; i <= n; i++) {
            int x, y; cin >> x >> y;
            dg.push_back({ x,y });
        }
        cout << fixed << setprecision(3) << Area(dg, n) << endl;
    }
    return 0;
}