#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string Produc(string a, string b) {
	int l1 = a.length();
	int l2 = b.length();
	int lmax = l1 > l2 ? l1 : l2;
	vector<int> res(l1 + l2, 0);
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < l1; i++)
	{
		for (int j = 0; j < l2; j++)
		{
			int mul = (a[i] - '0') * (b[j] - '0');
			res[i + j] += mul;
			res[i + j + 1] += res[i + j] / 10;
			res[i + j] %= 10;
		}
	}
	string ans = "";
	for (int i = res.size() - 1; i >= 0; i--) ans += res[i] + '0';
	while (ans.size() > 1 && ans[0] == '0') ans.erase(0, 1);
	return ans;
}

int main() {
	int t; cin >> t;
	while (t--)
	{
		string a, b; cin >> a >> b;
		string dau;
		if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-')) {
			dau = "-";
			if (a[0] == '-') a.erase(0, 1);
			if (b[0] == '-') b.erase(0, 1);
		}
		else if (a[0] == '-' && b[0] == '-') {
			a.erase(0, 1);
			b.erase(0, 1);
		}
		string ans = Produc(a, b);
		cout << dau + ans << endl;
	}
	return 0;
}