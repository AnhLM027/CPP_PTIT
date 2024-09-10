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
		string s; cin >> s;
		int n; cin >> n;
		int l = 0;
		int cnt = 0;
		for (int i = 0; i < s.length(); i++) {
			set<char> se;
			for (int j = i; j < s.length(); j++) {
				se.insert(s[j]);
				if (se.size() == n) cnt++;
				else if (se.size() > n) break;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}