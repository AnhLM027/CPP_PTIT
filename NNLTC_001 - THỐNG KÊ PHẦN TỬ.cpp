#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
	int x;
	vector<int> res;
	unordered_map <int, int> mp;
	while (cin >> x) {
		if (mp.find(x) == mp.end()) res.push_back(x);
		mp[x]++;
	}
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " " << mp[res[i]] << endl;
	}
	return 0;
}