#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int solve(string s) {
	if (s.length() > 9) return 0;
	ll sum = 0;
	for (int i = 0; i < s.length(); i++) {
		if (!isdigit(s[i])) return 0;
		sum = sum * 10 + s[i] - '0';
	}
	if (sum <= INT_MAX) return sum;
	else return 0;
}

int main() {
	fstream in;
	in.open("DATA.in", ios::in);
	string s;
	ll sum = 0;
	while (in >> s) sum += solve(s);
	cout << sum;
	in.close();
	return 0;
}