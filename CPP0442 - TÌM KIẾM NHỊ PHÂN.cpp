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
		int x; cin >> x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		auto it = lower_bound(a.begin(), a.end(), x);
		if (it == a.end()) cout << "-1\n";
		else {
			int tmp = (it - a.begin());
			if (a[tmp] == x) cout << "1\n";
			else cout << "-1\n";
		}
	}
	return 0;
}