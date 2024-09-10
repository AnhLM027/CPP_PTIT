#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	fstream in;
	in.open("DATA.in", ios::in);
	int n, m;
	in >> n >> m;
	vector<int> a(n), b(m);
	set<int> se;
	for (int i = 0; i < n; i++) {
		in >> a[i];
		se.insert(a[i]);
	}
	set<int> se2;
	for (int i = 0; i < m; i++) {
		in >> b[i];
		se2.insert(b[i]);
	}
	for (int x : se) {
		if (se2.count(x)) cout << x << " ";
	}
	in.close();
	return 0;
}