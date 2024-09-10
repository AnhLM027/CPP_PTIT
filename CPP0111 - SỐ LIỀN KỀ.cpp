#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int l = s.length();
		bool ok = true;
		for (int i = 1; i < l; i++) {
			if (abs(s[i] - s[i - 1]) != 1) {
				ok = false;
				cout << "NO\n";
				break;
			}
		}
		if (ok) cout << "YES\n";
	}
	return 0;
}