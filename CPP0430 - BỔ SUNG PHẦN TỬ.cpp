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
		vector<int> a(n);
		map<int, bool> mp;
		int min1 = 1e9, max1 = -1e9;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			min1 = min(min1, a[i]);
			max1 = max(max1, a[i]);
			mp[a[i]] = true;
		}
		int cnt = 0;
		for (int i = min1; i <= max1; i++) {
			if (!mp[i]) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}