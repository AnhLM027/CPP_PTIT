#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	run();
	int t; cin >> t;
	while (t--) {
		int n, m, l; cin >> n >> m >> l;
		int a[505][505];
		ll s[505][505];
		for (int i = 0; i < 505; i++) {
			for (int j = 0; j < 505; j++) s[i][j] = 0;
		}
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> a[i][j];
				s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + a[i][j];
			}
		}
		for (int i = l; i <= n; i++) {
			for (int j = l; j <= m; j++) {
				cout << (s[i][j] - s[i][j - l] - s[i - l][j] + s[i - l][j - l]) / (l * l) << " ";
			}
			cout << endl;
		}
	}
	return 0;
}