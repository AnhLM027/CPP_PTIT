#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


vector<ll> check(vector<ll> a, vector<ll> b, int n, int m) {
	vector<ll> res;
	int l1 = 0, l2 = 0;
	for (int i = 0; i < n; i++) {
		while (a[l1] < b[l2] && l1 + 1 < n) l1++;
		while (a[l1] > b[l2] && l2 + 1 < m) l2++;
		if (a[l1] == b[l2]) {
			res.push_back(a[l1]);
			l2++;
		}
		if (l2 >= m) break;
	}
	return res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m, p; cin >> n >> m >> p;
		vector<ll> a(n), b(m), c(p);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < m; i++) cin >> b[i];
		for (int i = 0; i < p; i++) cin >> c[i];
		vector<ll> d = check(a, b, n, m);
		int k = d.size();
		vector<ll> e = check(d, c, k, p);
		if (e.size() == 0) cout << "-1\n";
		else {
			for (int i = 0; i < e.size(); i++) {
				cout << e[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}