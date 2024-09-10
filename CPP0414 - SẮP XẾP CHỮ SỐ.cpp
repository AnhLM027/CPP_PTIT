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
		for (int i = 0; i < n; i++) {
			ll x; cin >> x;
			while (x) {
				se.insert(x % 10);
				x /= 10;
			}
		}
		for (int x : se) cout << x << " ";
		cout << endl;
	}
	return 0;
}