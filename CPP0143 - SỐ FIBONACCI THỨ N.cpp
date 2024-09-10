#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main() {
	ll fibo[93];
	fibo[1] = fibo[2] = 1;
	for (int i = 3; i < 93; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << fibo[n] << endl;
	}
	return 0;
}