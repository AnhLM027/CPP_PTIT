#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int te; cin >> te;
	while (te--) {
		string s; cin >> s;
		map<char, int> mp;
		for (int i = 0; i < s.length(); i++) {
			mp[s[i]]++;
		}
		ll cnt = 0;
		for (pair<char, int> x : mp) {
			cnt += (ll)x.second * (x.second + 1) / 2;
		}
		cout << cnt << endl;
	}
	return 0;
}