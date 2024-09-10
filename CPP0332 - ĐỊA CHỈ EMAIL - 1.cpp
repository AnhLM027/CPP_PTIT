#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int te; te = 1;
	while (te--) {
		string s; getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> res;
		while (ss >> token) {
			for (int i = 0; i < token.length(); i++) {
				token[i] = tolower(token[i]);
			}
			res.push_back(token);
		}
		cout << res[res.size() - 1];
		for (int i = 0; i < res.size() - 1; i++) {
			cout << res[i][0];
		}
		cout << "@ptit.edu.vn";
	}
	return 0;
}