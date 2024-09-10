#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll powbin(ll x, ll n) {
	ll tich = 1;
	while (n) {
		if (n % 2 == 1) {
			tich = (tich * x) % MOD;
		}
		x *= x;
		x %= MOD;
		n /= 2;
	}
	return tich;
}

ll solve(ll a, ll n, ll x) {
	ll b = powbin(x, n);
	return ((a % MOD) * (b % MOD)) % MOD;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		ll n, x; cin >> n >> x;
		ll sum = 0;
		for (int i = n - 1; i >= 0; i--) {
			ll a; cin >> a;
			sum += solve(a, i, x);
			sum %= MOD;
		}
		cout << sum << endl;
	}
	return 0;
}