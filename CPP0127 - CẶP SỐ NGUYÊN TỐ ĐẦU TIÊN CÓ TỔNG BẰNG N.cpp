#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool dp[1000006] = { false };

void sang() {
	dp[0] = dp[1] = true;
	for (int i = 2; i <= sqrt(1000005); i++) {
		if (!dp[i]) {
			for (int j = i * i; j <= 1000005; j += i) {
				dp[j] = true;
			}
		}
	}
}

int main() {
	sang();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		bool ok = false;
		for (int i = 2; i <= n; i++) {
			if (!dp[i] && !dp[n - i]) {
				cout << i << " " << n - i << endl;
				ok = true;
				break;
			}
		}
		if (!ok) cout << "-1\n";
	}
	return 0;
}