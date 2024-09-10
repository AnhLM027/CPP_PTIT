#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		ll ans = -1e9;
		int l = 0;
		for (int i = 0; i < n; i++) {
			ll tich = 1;
			for (int j = i; j < n; j++) {
				tich *= a[j];
				ans = max(ans, tich);
			}
		}
		cout << ans << endl;
	}
	return 0;
}