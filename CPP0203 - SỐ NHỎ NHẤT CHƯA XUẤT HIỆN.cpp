#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	bool check[1000005];
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		memset(check, false, sizeof(check));
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (a[i] > 0) check[a[i]] = true;
		}
		for (int i = 1; i < 1e6 + 5; i++) {
			if (!check[i]) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}