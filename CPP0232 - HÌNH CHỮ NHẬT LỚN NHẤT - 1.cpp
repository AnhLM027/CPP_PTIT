#include<bits/stdc++.h>
using namespace std;

#define FOD(i,a,b) for(int i=a;i<=b;i++)
#define FODV(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int a[25][25];
		FOD(i, 1, n)
			FOD(j, 1, m) cin >> a[i][j];
		ll s[25][25];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (i == 1) s[i][j] = a[i][j];
				else if (a[i][j] == 0) s[i][j] = 0;
				else s[i][j] = s[i - 1][j] + 1;
			}
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++) {
			sort(s[i] + 1, s[i] + m + 1, greater<ll>());
			for (int j = 1; j <= m; j++) {
				ans = max(ans, (ll)s[i][j] * j);
			}
		}
		cout << ans << endl;
	}
	return 0;
}