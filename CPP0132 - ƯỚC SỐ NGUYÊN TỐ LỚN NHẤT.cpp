#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		ll i = 2;
		ll ans = i;
		while (i <= sqrt(n)) {
			if (n % i == 0) {
				ans = max(ans, i);
				while (n % i == 0) {
					n /= i;
				}
			}
			i++;
		}
		if (n > 1) cout << n << endl;
		else cout << ans << endl;
	}
	return 0;
}