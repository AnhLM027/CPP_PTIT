#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int dx[9] = { -1,-1,-1,0,0,0,1,1,1 };
int dy[9] = { -1,0,1,1,0,-1,-1,0,1 };
int main() {
	run();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int m; cin >> m;
		int a[500][500];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int b[3][3];
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cin >> b[i][j];
			}
		}
		ll sum = 0;;
		for (int i = 1; i < n - 1; i++) {
			for (int j = 1; j < m - 1; j++) {
				for (int k = 0; k < 9; k++) {
					int x = a[i + dx[k]][j + dy[k]];
					int y = b[1 + dx[k]][1 + dy[k]];
					sum += (ll)x * y;
				}
			}
		}
		cout << sum << endl;
	}
	return 0;
}