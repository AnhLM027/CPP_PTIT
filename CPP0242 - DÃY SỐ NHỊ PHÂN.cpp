#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a1(n + 1), a2(n + 1);
        a1.push_back(0);
        a2.push_back(0);
        for (int i = 1; i <= n; i++) {
            cin >> a1[i];
            a1[i] = a1[i] + a1[i - 1];
        }
        for (int i = 1; i <= n; i++) {
            cin >> a2[i];
            a2[i] = a2[i] + a2[i - 1];
        }
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (a1[j] - a1[i] == a2[j] - a2[i]) {
                    ans = max(ans, j - i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}