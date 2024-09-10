#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll cnt(string s, int n) {
	ll ans = 0;
	for (int i = 0; i < s.length(); i++) {
		ll sum = 0;
		for (int j = i; j < s.length(); j++) {
			sum = sum * 10 + s[j];
			sum %= n;
			if (sum == 0) ans++;
		}
	}
	return ans;
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << cnt(s, 8) - cnt(s, 24) << endl;
	}
	return 0;
}