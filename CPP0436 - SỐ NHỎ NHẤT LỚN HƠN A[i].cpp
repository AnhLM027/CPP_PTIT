#include<bits/stdc++.h>
#define run() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	run();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		vector<int> b = a;
		sort(b.begin(), b.end());
		for (int i = 0; i < n; i++) {
			auto it = lower_bound(b.begin(), b.end(), a[i] + 1);
			if (it == b.end()) cout << "_ ";
			else cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}