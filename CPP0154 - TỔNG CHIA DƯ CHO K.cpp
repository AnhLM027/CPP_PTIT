#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int chuki = n / k;
		int du = n % k;
		int sum = 0;
		for (int i = 1; i <= du; i++) {
			sum += i;
		}
		ll tmp = chuki * (k * (k - 1) / 2) + sum;
		if (tmp == k) cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
