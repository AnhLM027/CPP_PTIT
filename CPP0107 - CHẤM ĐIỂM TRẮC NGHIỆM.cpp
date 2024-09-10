#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


string MA101 = "ABBADCCABDCCABD";
string MA102 = "ACCABCDDBBCDDBB";

int main() {
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int cnt = 0;
		if (n == 101) {
			int l = 0;
			for (int i = 0; i < 15; i++) {
				char x; cin >> x;
				if (x == MA101[l++]) cnt++;
			}
		}
		else if (n == 102) {
			int l = 0;
			for (int i = 0; i < 15; i++) {
				char x; cin >> x;
				if (x == MA102[l++]) cnt++;
			}
		}
		double ans = 1.0 * 10 * cnt / 15;
		cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}
