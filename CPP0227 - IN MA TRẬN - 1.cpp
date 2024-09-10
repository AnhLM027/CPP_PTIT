#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<vector<int>> a(n, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			if (i & 1) {
				for (int j = n - 1; j >= 0; j--) {
					cout << a[i][j] << " ";
				}
			}
			else {
				for (int j = 0; j < n; j++) {
					cout << a[i][j] << " ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
