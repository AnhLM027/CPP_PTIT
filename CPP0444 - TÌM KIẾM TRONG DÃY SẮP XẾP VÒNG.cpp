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
		int n, x; cin >> n >> x;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		for (int i = 0; i < n; i++) {
			if (a[i] == x) {
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}