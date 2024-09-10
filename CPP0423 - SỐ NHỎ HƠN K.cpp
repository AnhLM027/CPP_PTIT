#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


// Sắp đặt lại các phần tử của mảng sao cho các số nhỏ hơn hoặc bằng k ( đứng cạnh nhau )
// Dùng sliding window

int main() {
	run();
	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		vector<int> a(n);
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] <= k) cnt++;
		}
		int cnt2 = 0;
		for (int i = 0; i < cnt; i++) {
			if (a[i] > k) cnt2++;
		}
		int ans = cnt2;
		for (int i = 0, j = cnt; j < n; i++, j++) {
			if (a[i] > k) cnt2--;
			if (a[j] > k) cnt2++;
			ans = min(ans, cnt2);
		}
		cout << ans << endl;
	}
	return 0;
}