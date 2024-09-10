#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<ll> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		vector<ll> dp = a;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++) {
				if (a[j] < a[i]) {
					dp[i] = max(dp[j] + a[i], dp[i]);
				}
			}
		}
		cout << *max_element(dp.begin(), dp.end()) << endl;
	}
	return 0;
}