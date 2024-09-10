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
		vector<int> a(n+m);
		for (int& x : a) cin >> x;
		sort(a.begin(), a.end());
		for (int x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}