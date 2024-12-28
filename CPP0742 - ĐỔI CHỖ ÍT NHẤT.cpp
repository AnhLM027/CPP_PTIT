#include <bits/stdc++.h>
using namespace std;

const int SHIFT = 20;
const int MASK = 0xFFFFF;

typedef long long ll;

int main() {
	int te = 1; cin >> te;
	while (te--) {
		int cnt = 0;
		int n; cin >> n;
		vector<int> a(n);
		for (int& x : a) cin >> x;

		vector<ll> nodes(n);
		for (int i = 0; i < n; i++) {
			nodes[i] = (static_cast<ll>(a[i]) << SHIFT) + i;
		}
		sort(nodes.begin(), nodes.end());

		for (int i = 0; i < n; i++) {
			int origPos = static_cast<int>(nodes[i] & MASK);
			if (origPos != i) {
				swap(nodes[i], nodes[origPos]);
				cnt++;
				i--;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}