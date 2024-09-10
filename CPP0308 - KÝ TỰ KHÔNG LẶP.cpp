#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s; cin >> s;
		unordered_map<char, int> mp;
		for (char x : s) mp[x]++;
		for (char x : s) {
			if (mp[x] == 1) cout << x;
		}
		cout << endl;
	}
	return 0;
}
