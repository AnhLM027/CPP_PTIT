#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			int x; cin >> x;
			mp[x]++;
		}
		vector<pair<int, int>> a;
		for (pair<int, int> x : mp) {
			a.push_back({ x.first,x.second });
		}
		sort(a.begin(), a.end(), cmp);
		for (int i = 0; i < a.size(); i++) {
			for (int j = 0; j < a[i].second; j++) {
				cout << a[i].first << " ";
			}
		}
		cout << endl;
	}
}