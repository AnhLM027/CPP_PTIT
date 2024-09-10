#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		ll mod; cin >> mod;
		ll sum = 0;
		ll tich = 1;
		for (int i = s.length() - 1; i >= 0; i--) {
			int x = s[i] - '0';
			sum = (sum + tich * x) % mod;
			tich *= 10;
			tich %= mod;
		}
		cout << sum << endl;
	}
	return 0;
}