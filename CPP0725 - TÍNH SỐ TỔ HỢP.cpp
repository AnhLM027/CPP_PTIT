#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


ll C[1002][1002];

void tohop() {
	for (int i = 0; i < 1002; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) C[i][j] = 1;
			else C[i][j] = (C[i - 1][j - 1] % MOD + C[i - 1][j] % MOD) % MOD;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	tohop();
	int t; cin >> t;
	while (t--)
	{
		ll n, m; cin >> n >> m;
		cout << C[n][m] << endl;
	}
}