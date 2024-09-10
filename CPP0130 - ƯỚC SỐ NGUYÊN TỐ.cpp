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
				while (n % i == 0) {
					cout << i << " ";
					n /= i;
				}
			}
			i++;
		}
		if (n > 1) cout << n << " ";
		cout << endl;
	}
	return 0;
}
