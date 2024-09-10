#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
	int n, m; cin >> n >> m;
	string s; cin >> s;
	ll dp[1000][1000];
	memset(dp, 0, sizeof(dp));
	dp[0][(s[0] - '0') % m] = 1;
	for (int i = 1; i < n; i++) {
		dp[i][(s[i] - '0') % m]++;
		for (int j = 0; j < m; j++) {
			dp[i][j] += dp[i - 1][j];
			dp[i][(j * 10 + (s[i] - '0')) % m] += dp[i - 1][j];
		}
	}
	cout << dp[n - 1][0] << endl;
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}