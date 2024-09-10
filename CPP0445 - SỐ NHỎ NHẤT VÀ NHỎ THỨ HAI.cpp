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
		set<int> se;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			se.insert(a[i]);
		}
		if (se.size() < 2) cout << "-1\n";
		else {
			auto it = se.begin();
			cout << *it << " ";
			it++;
			cout << *it << endl;
		}
	}
	return 0;
}