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
		string s; cin >> s;
		int l = s.length();
		if (s[l - 2] == '8' && s[l - 1] == '6') cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
