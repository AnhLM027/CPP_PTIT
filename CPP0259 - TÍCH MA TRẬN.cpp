#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n, m, p; cin >> n >> m >> p;
	vector<vector<int>> a(n, vector<int>(m)), b(m, vector<int>(p));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			cin >> b[i][j];
		}
	}
	vector<vector<int>> res(n, vector<int>(p));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			res[i][j] = 0;
			for (int k = 0; k < m; k++) {
				res[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < p; j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
