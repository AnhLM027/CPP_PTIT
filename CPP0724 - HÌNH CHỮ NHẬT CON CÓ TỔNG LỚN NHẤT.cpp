#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[205][205];
		ll s[205][205];
		for (int i = 0; i < 205; i++) {
			for (int j = 0; j < 205; j++) s[i][j] = 0;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
				s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
			}
		}
		ll ans = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				for (int k = i; k <= n; k++) {
					for (int l = j; l <= m; l++) {
						ans = max(ans, (ll)s[k][l] - s[k][j - 1] - s[i - 1][l] + s[i - 1][j - 1]);
					}
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}