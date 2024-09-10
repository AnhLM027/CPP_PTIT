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
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		sort(a.begin(), a.end(), greater<int>());
		for (int i = 0; i < k; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}