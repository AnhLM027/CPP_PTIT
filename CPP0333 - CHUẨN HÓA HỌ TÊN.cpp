#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int te; te = 1;
	while (te--) {
		string s; getline(cin, s);
		stringstream ss(s);
		string token;
		vector<string> res;
		while (ss >> token) {
			token[0] = toupper(token[0]);
			for (int i = 1; i < token.length(); i++) {
				token[i] = tolower(token[i]);
			}
			res.push_back(token);
		}
		for (int i = 0; i < res.size() - 1; i++) {
			cout << res[i];
			if (i != res.size() - 2) cout << " ";
		}
		cout << ", ";
		for (char& x : res[res.size() - 1]) x = toupper(x);
		cout << res[res.size() - 1];
	}
	return 0;
}