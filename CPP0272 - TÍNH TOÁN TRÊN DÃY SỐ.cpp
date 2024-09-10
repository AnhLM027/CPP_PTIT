#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll ucln(ll a, ll b) {
	while (a != 0) { ll x = a; a = b % a; b = x; }
	return b;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		ll hx = 1;
		ll gx = a[0];
		for (int i = 0; i < n; i++) {
			hx *= a[i];
			hx %= MOD;
			gx = ucln(gx, a[i]);
		}
		ll ans = 1;
		while (gx) {
			if (gx % 2 == 1) {
				ans = (ans * hx) % MOD;
			}
			hx *= hx;
			hx %= MOD;
			gx /= 2;
		}
		cout << ans << endl;
	}
	return 0;
}