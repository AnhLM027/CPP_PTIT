#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		int ans = INT_MIN;
		for (int i = 0; i < n; i++) {
			vector<int> dp;
			for (int j = 0; j <= i; j++) {
				auto it = lower_bound(dp.begin(), dp.end(), a[j]);
				if (it == dp.end()) dp.push_back(a[j]);
				else *it = a[j];
			}
			int l1 = dp.size();
			vector<int> dp2;
			for (int j = n - 1; j >= i; j--) {
				auto it = lower_bound(dp2.begin(), dp2.end(), a[j]);
				if (it == dp2.end()) dp2.push_back(a[j]);
				else *it = a[j];
			}
			int l2 = dp2.size();
			ans = max(ans, l1 + l2 - 1);
		}
		cout << ans << endl;
	}
	return 0;
}