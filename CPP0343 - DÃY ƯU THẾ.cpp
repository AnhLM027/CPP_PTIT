#include<bits/stdc++.h>
#define MOD 1000000007
#define maxn 1003
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int te; cin >> te;
	cin.ignore();
	while (te--) {
		string s; getline(cin, s);
		stringstream ss(s);
		string token;
		vector<int> a;
		while (ss >> token) a.push_back(stoi(token));
		if (a.size() % 2 == 0) {
			int chan = 0, le = 0;
			for (int i = 0; i < a.size(); i++) {
				if (a[i] % 2 == 0) chan++;
				else le++;
			}
			if (chan > le) cout << "YES\n";
			else cout << "NO\n";
		}
		else {
			int chan = 0, le = 0;
			for (int i = 0; i < a.size(); i++) {
				if (a[i] % 2 == 0) chan++;
				else le++;
			}
			if (chan < le) cout << "YES\n";
			else cout << "NO\n";
		}
	}
	return 0;
}