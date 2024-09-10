#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[105][105];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			if (i == 0 || i == n - 1) {
				for (int j = 0; j < n; j++) cout << a[i][j] << " ";
			}
			else {
				for (int j = 0; j < n; j++) {
					if (j == 0 || j == n - 1) cout << a[i][j] << " ";
					else cout << "  ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}