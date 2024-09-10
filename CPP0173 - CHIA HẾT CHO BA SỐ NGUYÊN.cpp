#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll ucln(ll a, ll b) {
    while (a != 0) {
        ll x = a; a = b % a; b = x;  
    }
    return b;

}
ll bcnn(ll a, ll b) {
    return a * b / ucln(a, b);
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll x, y, z, n; cin >> x >> y >> z >> n;
        ll tmp = bcnn(bcnn(x, y), z);
        ll res = (ll)pow(10, n - 1);
        int ok = 0;
        ll ans = (res + tmp - 1) / tmp * tmp; // lam tron len
        // (res + tmp) % tmp == 0 thi phai giam thanh res + tmp - 1
        ll check = (ll)pow(10, n);
        if (ans < check) cout << ans << endl;
        else cout << "-1\n";
    }
    return 0;
}