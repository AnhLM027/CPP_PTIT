#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

// 1 2 3 322 5 53 7 7222 7332
string res[8] = { "2","3","322","5","53","7","7222","7332" };

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll n, a; cin >> n >> a;
        string ans;
        while (a) {
            int x = a % 10;
            a /= 10;
            if (x == 1 || x == 0) continue;
            ans += res[x - 2];
        }
        sort(ans.begin(), ans.end(), greater<char>());
        cout << ans << endl;
    }
    return 0;
}