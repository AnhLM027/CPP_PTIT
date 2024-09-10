#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		ll a[10000];
		for (int i = 0; i < n; i++) cin >> a[i];
		ll sum = 0;
		for (int i = 0; i < k; i++) sum += a[i];
		ll maxav = sum;
		int ind = 0;
		for (int i = 1; i < n - k + 1; i++) {
			sum -= a[i - 1];
			sum += a[i + k - 1];
			if ((double)sum / k > (double)maxav / k) {
				maxav = sum;
				ind = i;
			}
		}
		for (int i = ind; i < ind + k; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}