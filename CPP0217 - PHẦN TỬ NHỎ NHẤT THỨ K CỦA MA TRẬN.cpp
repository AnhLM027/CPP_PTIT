#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		vector<int> a(n * n);
		for (int i = 0; i < n * n; i++) cin >> a[i];
		sort(a.begin(), a.end());
		cout << a[k - 1] << endl;
	}
	return 0;
}