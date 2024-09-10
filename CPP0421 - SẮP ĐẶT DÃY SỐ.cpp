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
	while (te--)
	{
		int n; cin >> n;
		map<int, bool> mp;
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			mp[x] = true;
		}
		for (int i = 0; i < n; i++) {
			if (mp[i]) cout << i << " ";
			else cout << "-1 ";
		}
		cout << endl;
	}
	return 0;
}