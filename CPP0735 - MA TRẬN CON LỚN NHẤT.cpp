#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		int a[500][500], dp[501][501] = { 0 };
		int res = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				cin >> a[i][j], dp[i][j] = a[i][j], res = max(res, a[i][j]);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				if (a[i][j] == 0) dp[i][j] = 0;
				else
					dp[i][j] += min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
				res = max(res, dp[i][j]);
			}
		}
		cout << res << endl;
	}
}