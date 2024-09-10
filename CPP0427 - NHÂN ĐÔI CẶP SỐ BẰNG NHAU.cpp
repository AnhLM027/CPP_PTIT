#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0 && i + 1 < n && a[i + 1] == a[i]) {
            res.push_back(a[i] * 2);
            a[i + 1] = 0;
        }
        else if (a[i] != 0) res.push_back(a[i]);
    }
    for (int i = res.size(); i < n; i++) res.push_back(0);
    for (int i = 0; i < n; i++) cout << res[i] << " ";
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