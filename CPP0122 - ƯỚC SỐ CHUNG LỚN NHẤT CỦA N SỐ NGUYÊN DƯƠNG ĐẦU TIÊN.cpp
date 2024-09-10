#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll ucln(ll a, ll b) {
	while (a != 0) { ll x = a; a = b % a; b = x; }
	return b;
}

ll bcnn(ll a, ll b) {
	return a * b / ucln(a, b);
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		ll bc = 1;
		for (int i = 1; i <= n; i++) {
			bc = bcnn(bc, i);
		}
		cout << bc << endl;
	}
	return 0;
}
