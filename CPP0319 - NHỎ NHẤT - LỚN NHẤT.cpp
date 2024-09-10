#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"



int main() {
	int m, s; cin >> m >> s;
	if (s > 9 * m || s == 0 && m > 1) {
		cout << "-1 -1";
		return 0;
	}
	int tmp1 = s, tmp2 = s;
	string minn = "";
	while (tmp1) {
		if (tmp1 >= 9) {
			minn.push_back('9'); tmp1 -= 9;
		}
		else {
			minn.push_back(tmp1 + '0'); tmp1 = 0;
		}
	}
	if (minn.length() < m) {
		minn[minn.length() - 1] -= 1;
		while (minn.length() < m - 1) minn.push_back('0');
		minn.push_back('1');
	}
	reverse(minn.begin(), minn.end());
	string maxx = "";
	while (tmp2) {
		if (tmp2 >= 9) {
			maxx.push_back('9'); tmp2 -= 9;
		}
		else {
			maxx.push_back(tmp2 + '0'); tmp2 = 0;
		}
	}
	while (maxx.length() < m) maxx.push_back('0');
	cout << minn << " " << maxx;
	return 0;
}