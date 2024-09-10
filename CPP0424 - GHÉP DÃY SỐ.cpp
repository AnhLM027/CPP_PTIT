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
		int m; cin >> m;
		vector<int> a;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int x; cin >> x;
				a.push_back(x);
			}
		}
		sort(a.begin(), a.end());
		for (int x : a) cout << x << " ";
		cout << endl;
	}
	return 0;
}