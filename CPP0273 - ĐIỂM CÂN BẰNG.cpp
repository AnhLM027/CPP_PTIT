#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    while (te--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int dp[100001];
        dp[0] = 0;
        for (int i = 1; i <= n; i++) dp[i] = dp[i - 1] + a[i - 1];
        int ok = -1;
        for (int i = 0; i < n; i++) {
            if (dp[i] - dp[0] == dp[n] - dp[i + 1]) {
                ok = i + 1;
                break;
            }
        }
        cout << ok << endl;
    }
    return 0;
}