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
		int n, m; cin >> n >> m;
		vector<ll> a(n), b(m);
		for (ll& x : a) cin >> x;
		for (ll& x : b) cin >> x;
		ll tmp1 = *max_element(a.begin(), a.end());
		ll tmp2 = *min_element(b.begin(), b.end());
		cout << tmp1 * tmp2 << endl;
	}
	return 0;
}