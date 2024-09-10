#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


#define FOD(i,a,b) for(int i=a;i<=b;i++)
#define FODV(i,a,b) for(int i=a;i>=b;i--)
#define FOR(i,a,b) for(int i=a;i<b;i++)

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
char res[25][25];

void DFS(int i, int j) {
	res[i][j] = '1';
	for (int k = 0; k < 4; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && res[i1][j1] == 'O') {
			DFS(i1, j1);
		}
	}
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> res[i][j];
			}
		}
		for (int i = 0; i < n; i++) {
			if (i == 0 || i == n - 1) {
				for (int j = 0; j < m; j++) {
					if (res[i][j] == 'O') {
						DFS(i, j);
					}
				}
			}
			else {
				for (int j = 0; j < m; j++) {
					if ((j == 0 || j == m - 1) && res[i][j] == 'O') {
						DFS(i, j);
					}
				}
			}
		}
		FOR(i, 0, n) {
			FOR(j, 0, m) {
				if (res[i][j] == '1') res[i][j] = 'O';
				else if (res[i][j] == 'O') res[i][j] = 'X';
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}