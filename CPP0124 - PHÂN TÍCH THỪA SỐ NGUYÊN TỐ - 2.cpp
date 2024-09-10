#include <bits/stdc++.h>
using namespace std;


typedef long long ll;

#define AnhLM027 "Le Minh Anh"

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main() {
	int n; cin >> n;
	int i = 2;
	vector<pair<int, int>> res;
	while (i <= sqrt(n)) {
		if (n % i == 0) {
			int cnt = 0;
			while (n % i == 0)
			{
				n /= i;
				cnt++;
			}
			res.push_back({ i,cnt });
		}
		i++;
	}
	if (n > 1) res.push_back({ n,1 });
	sort(res.begin(), res.end(), cmp);
	for (auto x : res) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}