#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		unordered_map<int, int> mp;
		for (int& x : a) {
			cin >> x;
			mp[x]++;
		}
		int cnt = 0;
		for (int x : a) if (mp[x] > 1) cnt++;
		cout << cnt << endl;
	}
	return 0;
}
