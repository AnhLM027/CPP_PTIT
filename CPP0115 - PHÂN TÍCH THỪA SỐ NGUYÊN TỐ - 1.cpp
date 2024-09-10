#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int i = 2;
		while (i <= sqrt(n)) {
			if (n % i == 0) {
				int cnt = 0;
				while (n % i == 0) {
					cnt++;
					n /= i;
				}
				cout << i << " " << cnt << " ";
			}
			i++;
		}
		if (n > 1) cout << n << " " << 1;
		cout << endl;
	}
	return 0;
}