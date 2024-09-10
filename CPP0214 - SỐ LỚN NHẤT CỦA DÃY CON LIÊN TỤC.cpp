#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		multiset<int> se;
		for (int i = 0; i < k; i++) se.insert(a[i]);
		auto it = prev(se.end());
		cout << *it << " ";
		for (int i = k; i < n; i++) {
			se.insert(a[i]);
			it = se.find(a[i - k]);
			se.erase(it);
			cout << *prev(se.end()) << " ";
		}
		cout << endl;
	}
	return 0;
}