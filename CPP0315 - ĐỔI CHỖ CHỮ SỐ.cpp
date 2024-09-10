#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
	string s; cin >> s;
	int n = s.size();
	for (int i = n - 1; i > 0; i--) {
		if (s[i] < s[i - 1]) {
			int tmp = i;
			for (int j = i + 1; j < n; ++j) {
				if (s[j] < s[i - 1] && s[j] > s[tmp]) tmp = j;
			}
			swap(s[i - 1], s[tmp]);
			cout << s << endl;
			return;
		}
	}
	cout << "-1\n";
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}