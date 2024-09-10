#include<bits/stdc++.h>
using namespace std;

#define FOD(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a,b) for(int i=a;i<b;i++)

#define AnhLM027 "Le Minh Anh"


int a[101][101];
int n, m;
int huong;

void DFS(int i, int j) {
	if (i <= n && j <= m) {
		cout << a[i][j] << " ";
		if ((i == 1 && j != m) && huong == 1) huong = 0, DFS(i, j + 1);
		else if ((j == 1 && i != n) && huong == 0) huong = 1, DFS(i + 1, j);
		else if (i == n && huong == 0) huong = 1, DFS(i, j + 1);
		else if (j == m && huong == 1) huong = 0, DFS(i + 1, j);
		else if (huong == 0) DFS(i + 1, j - 1);
		else if (huong == 1) DFS(i - 1, j + 1);
	}
}


int main() {
	int t; cin >> t;
	while (t--) {
		huong = 1;
		cin >> n >> m;
		FOD(i, 1, n)
			FOD(j, 1, m) cin >> a[i][j];
		DFS(1, 1);
		cout << endl;
	}
	return 0;
}