#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int n, k, cnt;

void Try(int i, int j, int a[][100], int sum) {
	if (i == n - 1 && j == n - 1 && sum == k) cnt++;
	if (i >= 0 && i + 1 < n) {
		Try(i + 1, j, a, sum + a[i + 1][j]);
	}
	if (j >= 0 && j + 1 < n) {
		Try(i, j + 1, a, sum + a[i][j + 1]);
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		int a[100][100];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> a[i][j];
			}
		}
		cnt = 0;
		Try(0, 0, a, a[0][0]);
		cout << cnt << endl;
	}
}