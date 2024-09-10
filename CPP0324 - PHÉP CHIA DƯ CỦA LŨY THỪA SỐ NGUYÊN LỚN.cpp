#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		ll b; cin >> b;
		ll mod; cin >> mod;
		ll sum = 0;
		ll tich = 1;
		for (int i = s.length() - 1; i >= 0; i--) {
			int x = s[i] - '0';
			sum = (sum + tich * x) % mod;
			tich = (tich * 10) % mod;
		}
		ll ans = 1;
		while (b) {
			if (b % 2 == 1) {
				ans = (ans * sum) % mod;
			}
			sum *= sum;
			sum %= mod;
			b /= 2;
		}
		cout << ans << endl;
	}
	return 0;
}