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
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		if (n == 1) cout << a[0] << endl;
		else if (n == 2) cout << max(a[0], a[1]) << endl;
		else {
			ll dp[100000];
			dp[0] = a[0], dp[1] = a[1];
			dp[2] = a[2] + a[0];
			for (int i = 3; i < n; i++) dp[i] = a[i] + max(dp[i - 2], dp[i - 3]);
			cout << *max_element(dp, dp + n) << endl;
		}
	}
	return 0;
}