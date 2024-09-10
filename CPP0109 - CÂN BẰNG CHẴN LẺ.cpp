#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool check(int n) {
	int chan = 0, le = 0;
	while (n) {
		n & 1 ? le++ : chan++; n /= 10;
	}
	return chan == le;
}

int main() {
	int n; cin >> n;
	int l = pow(10, n - 1);
	int r = pow(10, n);
	int cnt = 0;
	for (int i = l; i <= r; i++) {
		if (check(i)) {
			cnt++;
			cout << i << " ";
		}
		if (cnt % 10 == 0) cout << endl;
	}
	return 0;
}
