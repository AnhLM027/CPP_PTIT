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
		set<int> se;
		for (int i = 0; i < n - 1; i++) {
			int x; cin >> x;
			se.insert(x);
		}
		bool ok = 1;
		for (int i = 1; i <= n; i++) {
			if (se.count(i) == 0) {
				cout << i << endl;
				ok = 0;
				break;
			}
		}
		if (ok) cout << n + 1 << endl;
	}
	return 0;
}