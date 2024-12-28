#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


vector<int> a;

ll N = 1e5;

void sinh(int i) {
	if (i < N) {
		a.push_back(i);
		sinh(i * 10 + 1);
		sinh(i * 10 + 2);
		sinh(i * 10 + 3);
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	for (int i = 1; i <= 3; i++) {
		sinh(i);
	}

	int dp[N] = { 0 };
	for (int& x : a) dp[x] = 1;

	for (int j = 1; j <= N; j++) {
		for (int i = 0; i < a.size(); i++) {
			if (j - a[i] > 0 && dp[j - a[i]]) {
				if (!dp[j]) dp[j] = dp[j - a[i]] + 1;
				else dp[j] = min(dp[j], dp[j - a[i]] + 1);
			}
		}
	}

	int te; cin >> te;
	while (te--) {
		int X; cin >> X;
		cout << dp[X] << endl;

	}

	//time
	return 0;
}