#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; t = 1;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) a[i] = 0;
        int k, b; cin >> k >> b;
        for (int i = 0; i < b; i++) {
            int x; cin >> x;
            a[x] = 1;
        }
        int cnt = 0;
        for (int i = 1; i <= k; i++) cnt += a[i];
        int ans = cnt;
        for (int i = 2; i <= n - k + 1; i++) {
            cnt -= a[i - 1];
            cnt += a[i + k - 1];
            ans = min(ans, cnt);
        }
        cout << ans;
    }
    return 0;
}