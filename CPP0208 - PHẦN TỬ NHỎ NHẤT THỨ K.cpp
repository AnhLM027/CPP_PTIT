#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for (int& x : a) cin >> x;
		sort(a.begin(), a.end());
		cout << a[k - 1] << endl;
	}
	return 0;
}
