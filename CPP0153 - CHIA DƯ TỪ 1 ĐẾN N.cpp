#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		ll n, k; cin >> n >> k;
		ll chuki = n / k;
		ll du = n % k;
		ll sum = 0;
		for (int i = 1; i <= du; i++) {
			sum += i;
		}
		ll tmp = chuki * (k * (k - 1) / 2) + sum;
		cout << tmp << endl;
	}
	return 0;
}