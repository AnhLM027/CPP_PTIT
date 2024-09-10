#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	bool hang[100], cot[100];
	while (t--)
	{
		int n, m; cin >> n >> m;
		memset(hang, false, sizeof(hang));
		memset(cot, false, sizeof(cot));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int x; cin >> x;
				if (x) {
					hang[i] = true; cot[j] = true;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (hang[i] || cot[j]) cout << 1 << " ";
				else cout << 0 << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
