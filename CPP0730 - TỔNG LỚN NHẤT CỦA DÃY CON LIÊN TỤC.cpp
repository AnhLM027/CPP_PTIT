#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll a[1000005];
		for (int i = 0; i < n; i++) cin >> a[i];
		ll res_max = a[0];
		ll res_tmp = a[0];
		for (int i = 1; i < n; i++) {
			res_tmp += a[i];
			if (res_max < res_tmp) res_max = res_tmp;
			if (res_tmp < a[i]) res_tmp = a[i];

		}
		cout << res_max << endl;
	}
}