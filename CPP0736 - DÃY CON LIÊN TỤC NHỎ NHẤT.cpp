#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define FOD(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		vector<ll> a(n);
		FOR(i, 0, n) cin >> a[i];
		int l = 0;
		ll sum = 0;
		int ans = n + 1;
		for (int r = 0; r < n; r++) {
			sum += a[r];
			while (sum > x) {
				ans = min(ans, r - l + 1);
				sum -= a[l++];
			}
		}
		if (ans == n + 1) cout << "-1\n";
		else cout << ans << endl;
	}
	return 0;
}