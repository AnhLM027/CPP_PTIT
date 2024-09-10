#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


// x = k.p + 1
// --> x ≡ 1 (mod p) || x ≡ p - 1 (mod p)
// --> x^2 ≡ 1

int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		ll b, p; cin >> b >> p;
		ll cnt = 0;
		for (ll i = 1; i < p; i++) {
			if ((i * i) % p == 1) {
				ll tmp = i + p * (b / p);
				if (tmp > b) tmp -= p;
				cnt += (ll)(tmp - i) / p + 1;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}