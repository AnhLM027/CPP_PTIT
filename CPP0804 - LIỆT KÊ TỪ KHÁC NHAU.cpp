#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	fstream in;
	in.open("VANBAN.in", ios::in);
	string s;
	set<string> se;
	while (in >> s) {
		for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
		se.insert(s);
	}
	for (string x : se) {
		cout << x << endl;
	}
	in.close();
	return 0;
}