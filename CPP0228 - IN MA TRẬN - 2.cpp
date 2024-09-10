#include<bits/stdc++.h>
using namespace std;

#define FOD(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)

#define AnhLM027 "Le Minh Anh"


int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int cnt = 1;
		int a[50][50];
		FOD(i, 1, 4 * n)
			FOD(j, 1, 4 * n) a[i][j] = cnt++;
		int h1 = 0, h2 = 4 * n + 1;
		int c1 = 1, c2 = 4 * n;
		vector<int> tmp;
		while (h1 < h2 && c1 < c2) {
			h1++, h2--;
			for (int i = h1; i <= h2; i++) tmp.push_back(a[i][c1]);
			c1++, c2--;
			for (int i = c1; i <= c2; i++) tmp.push_back(a[h2][i]);
			h2--, h1++;
			for (int i = h2; i >= h1; i--) tmp.push_back(a[i][c2]);
			c2--, c1++;
			for (int i = c2; i >= c1; i--) tmp.push_back(a[h1][i]);
		}
		h1 = 0, h2 = 4 * n + 1;
		c1 = 1, c2 = 4 * n;
		vector<int> tmp2;
		while (h1 < h2 && c1 < c2) {
			h2--, h1++;
			for (int i = h2; i >= h1; i--) tmp2.push_back(a[i][c2]);
			c1++, c2--;
			for (int i = c2; i >= c1; i--) tmp2.push_back(a[h1][i]);
			h1++, h2--;
			for (int i = h1; i <= h2; i++) tmp2.push_back(a[i][c1]);
			c2--, c1++;
			for (int i = c1; i <= c2; i++) tmp2.push_back(a[h2][i]);
		}
		reverse(tmp.begin(), tmp.end());
		reverse(tmp2.begin(), tmp2.end());
		for (int i = 0; i < tmp2.size(); i++) cout << tmp2[i] << " ";
		cout << endl;
		for (int i = 0; i < tmp.size(); i++) cout << tmp[i] << " ";
		cout << endl;
	}
	return 0;
}