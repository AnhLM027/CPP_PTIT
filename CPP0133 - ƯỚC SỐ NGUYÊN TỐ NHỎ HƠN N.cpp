#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool dp[100005] = { false };

void sang() {
	dp[0] = dp[1] = true;
	for (int i = 2; i <= sqrt(100000); i++) {
		if (!dp[i]) {
			for (int j = i * i; j <= 100000; j += i) {
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
		for (int i = 2; i <= n; i++) {
			if (!dp[i]) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
