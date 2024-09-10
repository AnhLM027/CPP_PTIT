#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fi first
#define se second
#define sz size()
#define pb push_back

#define AnhLM027 "Le Minh Anh"


string s;

int solve() {
    vector<pair<char, int>> vp;
    int res = 0;
    int tmp;
    for (int i = 0; i < s.length(); i++) {
        vp.pb({ s[i], i });
        while (vp.sz >= 3 && vp[vp.sz - 1].fi == '0' 
            && vp[vp.sz - 2].fi == '0' && vp[vp.sz - 3].fi == '1') {
            vp.pop_back();
            vp.pop_back();
            vp.pop_back();
        }
        tmp = vp.back().se;
        res = max(res, i - tmp);
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        cin >> s;
        cout << solve() << endl;
    }
    return 0;
}