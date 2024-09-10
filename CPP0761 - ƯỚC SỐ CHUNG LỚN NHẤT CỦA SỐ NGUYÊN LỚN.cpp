#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll gcd(ll a, ll b) {
	while (a) { ll x = a; a = b % a; b = x; }
	return b;
}

int main() {
	int t; cin >> t;
	while (t--) {
		ll a; cin >> a;
		string b; cin >> b;
		ll tmp = 0;
		for (int i = 0; i < b.length(); i++) {
			tmp = (tmp * 10 + b[i] - '0') % a;
		}
		cout << gcd(a, tmp) << endl;
	}
}
