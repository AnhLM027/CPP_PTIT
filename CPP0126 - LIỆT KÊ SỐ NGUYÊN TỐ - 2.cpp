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
		int l, r; cin >> l >> r;
		for (int i = l; i <= r; i++) {
			if (!dp[i]) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}