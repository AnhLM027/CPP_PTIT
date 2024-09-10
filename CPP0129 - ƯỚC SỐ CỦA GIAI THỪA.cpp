#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int te; cin >> te;
	while (te--)
	{
		int n, p; cin >> n >> p;
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			int j = i;
			while (j % p == 0) {
				j /= p;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}