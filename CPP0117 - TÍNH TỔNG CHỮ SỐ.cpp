#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int sum(int n) {
	if (n < 10) return n;
	int ans = 0;
	while (n) {
		ans += n % 10;
		n /= 10;
	}
	return sum(ans);
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << sum(n) << endl;
	}
	return 0;
}
