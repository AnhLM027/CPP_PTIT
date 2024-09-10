#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[101][101];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		set<int> s;
		for (int i = 0; i < n; i++) s.insert(a[0][i]);
		for (int i = 1; i < n; i++) {
			set<int> tmp;
			for (int j = 0; j < n; j++) {
				if (s.count(a[i][j])) {
					tmp.insert(a[i][j]);
				}
			}
			s = tmp;
		}
		cout << s.size() << endl;
	}
	return 0;
}