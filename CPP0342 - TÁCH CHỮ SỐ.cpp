#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
    string s; cin >> s;
    int l = s.length();
    int ans = 0;
    string t;
    for (int i = 0; i < l; i++) {
        if (isdigit(s[i])) ans += s[i] - '0';
        else t += s[i];
    }
    sort(t.begin(), t.end());
    cout << t << ans << endl;
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
