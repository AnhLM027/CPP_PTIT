#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int k, x;
    cin >> k >> x;
    auto it = lower_bound(a.begin(), a.end(), x);
    int ind = it - a.begin();
    for (int i = ind - k / 2; i < ind; ++i) cout << a[i] << " ";
    for (int i = ind + 1; i <= ind + k / 2; ++i) cout << a[i] << " ";
    cout << endl;
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