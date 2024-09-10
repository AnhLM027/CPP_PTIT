#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n; cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < 3; j++) {
			int x; cin >> x;
			if (x) cnt++;
		}
		if (cnt >= 2) ans++;
	}
	cout << ans;
	return 0;
}
