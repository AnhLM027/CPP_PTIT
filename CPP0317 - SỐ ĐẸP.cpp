#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		string t = s;
		reverse(t.begin(), t.end());
		if (s != t) {
			cout << "NO\n";
			continue;
		}
		bool ok = true;
		for (char x : s) {
			if (x - '0' & 1) {
				ok = false;
				break;
			}
		}
		if (ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
