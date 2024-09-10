#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int solve() {
	int n; cin >> n;
	vector<int> a(n);
	for (int& x : a) cin >> x;
	int cnt = 0;
	for (int i = 0; i < n - 1; i++) {
		int pos = i + 1;
		int tmp = a[i + 1];
		if (i + a[i] >= n) return cnt + 1;
		bool check0 = false;
		for (int j = i + 1; j <= i + a[i]; j++) {
			if (j >= n) break;
			if (j + a[j] > pos + tmp) {
				pos = j; tmp = a[j];
			}
			if (a[j] != 0) check0 = true;
		}
		if (tmp != 0 && !check0) return -1;
		i = pos - 1; cnt++;
	}
	return cnt;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cout << solve() << endl;
	}
	return 0;
}