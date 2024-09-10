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
		ll a, b; cin >> a >> b;
		cout << bcnn(a, b) << " " << ucln(a, b) << endl;
	}
	return 0;
}
