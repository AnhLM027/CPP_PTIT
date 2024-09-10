#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

ll dp[93];
void fibo() {
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= 92; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
}

int check(int n) {
	for (int i = 0; i <= 92; i++) {
		if (n <= dp[i]) {
			if (n == dp[i]) return 1;
			else return 0;
		}
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	fibo();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			if (check(x)) a.push_back(x);
		}
		for (int x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}