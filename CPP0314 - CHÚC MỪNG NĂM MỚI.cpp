#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	unordered_set<string> se;
	cin.ignore();
	while (t--) {
		string s; getline(cin, s);
		se.insert(s);
	}
	cout << se.size();
	return 0;
}
