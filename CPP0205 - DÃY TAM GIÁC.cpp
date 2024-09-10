#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		vector<int> a(n);
		for (int& x : a) cin >> x;
		cout << *max_element(a.begin(), a.end()) << endl;
	}
	return 0;
}
