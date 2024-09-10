#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    string s; cin >> s;
    int l = s.length();
    int ans = INT_MIN;
    for (int i = 0; i < l; i++) {
        if (isdigit(s[i])) {
            int j = i;
            int sum = 0;
            while (j < l && isdigit(s[j])) {
                sum = sum * 10 + s[j] - '0';
                j++;
            }
            ans = max(ans, sum);
            i = j;
        }
    }
    cout << ans << endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
