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
		vector<ll> a;
		int cnt_0 = 0;
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			if (x == 0) cnt_0++;
			else a.push_back(x);
		}
		for (ll x : a) cout << x << " ";
		for (int i = 0; i < cnt_0; i++) cout << "0 ";
		cout << endl;
	}
	return 0;
}