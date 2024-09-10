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
		vector<ll> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j >= i; j--) {
				if (j - i < ans) break;
				if (a[j] >= a[i]) ans = max(ans, j - i);
			}
		}
		cout << ans << endl;
	}
	return 0;
}