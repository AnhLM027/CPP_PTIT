#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll mul(ll a, ll b, ll mod) {
	ll sum = 0;
	while (b) {
		if (b % 2 == 1) {
			sum = (sum + a) % mod;
		}
		a = (a * 2) % mod;
		b /= 2;
	}
	return sum;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		ll a, b, c; cin >> a >> b >> c;
		ll x = a % c, y = b % c;
		cout << mul(x, y, c) % c << endl;
	}
}