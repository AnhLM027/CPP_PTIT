#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int n; cin >> n;
	double ans = 0;
	for (int i = 1; i <= n; i++) {
		ans += (double)1 / i;
	}
	cout << fixed << setprecision(4) << ans;
	return 0;
}