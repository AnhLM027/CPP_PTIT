#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string lower(string s) {
	for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
	return s;
}

int main() {
	fstream in1, in2;
	in1.open("DATA1.in", ios::in);
	in2.open("DATA2.in", ios::in);
	string s;
	map<string, int> mp;
	set<string> se;
	while (in1 >> s) {
		s = lower(s);
		se.insert(s);
		mp[s]++;
	}
	map<string, int> mp2;
	while (in2 >> s) {
		s = lower(s);
		se.insert(s);
		mp2[s]++;

	}
	for (string x : se) cout << x << " ";
	cout << endl;
	for (pair<string, int> x : mp) {
		if (mp2[x.first] > 0) cout << x.first << " ";
	}
	in1.close();
	in2.close();
	return 0;
}