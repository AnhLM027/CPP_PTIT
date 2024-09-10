#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	run();
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int cnt[1000000] = { 0 };
		int a[1000000];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			cnt[a[i]]++;
		}
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			for (int i = 0; i < cnt[x]; i++) cout << x << " ";
			cnt[x] = 0;
		}
		sort(a, a + n);
		for (int i = 0; i < n; i++) {
			if (cnt[a[i]] > 0) cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}