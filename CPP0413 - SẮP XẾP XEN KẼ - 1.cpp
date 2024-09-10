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
		for (int& x : a) cin >> x;
		sort(a.begin(), a.end(), greater<int>());
		int l = 0, r = n - 1;
		while (l < n / 2 + 1) {
			cout << a[l++] << " ";
			if (r >= n / 2 + 1) cout << a[r--] << " ";
		}
		cout << endl;
	}
	return 0;
}