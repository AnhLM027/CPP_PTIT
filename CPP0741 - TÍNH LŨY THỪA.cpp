#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll powbin(ll x, ll y, ll p) {
    ll ans = 1;
    while (y) {
        if (y % 2 == 1) {
            ans *= x;
            ans %= p;
        }
        x *= x;
        x %= p;
        y /= 2;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll x, y, p; cin >> x >> y >> p;
        cout << powbin(x, y, p) << endl;
    }
}