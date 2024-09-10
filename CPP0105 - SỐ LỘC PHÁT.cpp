#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


bool check(int n) {
	while (n) {
		if (n % 10 != 0 && n % 10 != 6 && n % 10 != 8) return false;
		n /= 10;
	}
	return true;
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		if (check(n)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
