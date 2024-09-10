#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool snt(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}


int main() {
	int l, r; cin >> l >> r;
	if (l > r) swap(l, r);
	for (int i = l; i <= r; i++) {
		if (snt(i)) cout << i << " ";
	}
	return 0;
}