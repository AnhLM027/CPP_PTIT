#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i++) {
        auto it = lower_bound(a.begin() + i + 1, a.end(), a[i] + k);
        int x = it - (a.begin() + i) - 1;
        cnt += x;
    }
    cout << cnt << endl;
}

int main() {
    run();
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}