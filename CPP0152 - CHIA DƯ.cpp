#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int a, m; cin >> a >> m;
		bool ok = false;
		for (int i = 0; i < m; i++) {
			if (a * i % m == 1) {
				cout << i << endl;
				ok = true;
				break;
			}
		}
		if (!ok) cout << -1 << endl;
	}
	return 0;
}
