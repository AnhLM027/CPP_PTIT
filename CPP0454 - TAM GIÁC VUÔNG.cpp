#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        set<ll> se;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] *= a[i]; se.insert(a[i]);
        }
        sort(a.begin(), a.end());
        int ok = 0;
        for (int i = 0; i < n - 1; i++) {
            if (ok) break;
            for (int j = i + 1; j < n; j++) {
                if (se.count(a[i] + a[j])) {
                    ok = 1;
                    break;
                }
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}