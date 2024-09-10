#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	string s; cin >> s;
	for (char& x : s) x = tolower(x);
	string tmp = "";
	for (char x : s) {
		if (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y') tmp += x;
	}
	for (char x : tmp) cout << "." << x;
	return 0;
}