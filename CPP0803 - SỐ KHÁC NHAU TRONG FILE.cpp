#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	fstream in;
	in.open("DATA.in", ios::in);
	int s;
	map<int, int> mp;
	while (in >> s) mp[s]++;
	for (pair<int, int> x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	in.close();
	return 0;
}