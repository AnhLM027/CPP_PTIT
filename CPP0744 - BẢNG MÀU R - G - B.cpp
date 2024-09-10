#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll gt(ll n) {
    ll tich = 1;
    for (int i = 2; i <= n; i++) tich *= i;
    return tich;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll tmp = gt(n);
        ll a, b, c; cin >> a >> b >> c;
        ll sum = 0;
        for (int i = a; i <= n; i++) {
            for (int j = b; j <= n - i; j++) {
                int k = n - i - j;
                if (k >= c) sum += tmp / (gt(i) * gt(j) * gt(k));
            }
        }
        cout << sum << endl;
    }
    return 0;
}