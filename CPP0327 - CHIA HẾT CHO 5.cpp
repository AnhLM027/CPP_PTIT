#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int sum = 0;
		int tich = 1;
		for (int i = s.length() - 1; i >= 0; i--) {
			int x = s[i] - '0';
			sum = (sum + tich * x) % 5;
			tich = (tich * 2) % 5;
		}
		if (sum % 5 == 0) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}