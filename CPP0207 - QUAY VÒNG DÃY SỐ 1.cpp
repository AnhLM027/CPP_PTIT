#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


void solve() {
	int n, d;
	cin >> n >> d;
	queue<int> qe;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		qe.push(x);
	}
	queue<int> tmp;
	while (d--) {
		int x = qe.front();
		qe.pop();
		tmp.push(x);
	}
	while (!qe.empty()) {
		cout << qe.front() << " ";
		qe.pop();
	}
	while (!tmp.empty()) {
		cout << tmp.front() << " ";
		tmp.pop();
	}
	cout << endl;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}