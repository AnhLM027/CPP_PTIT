#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int dx[8] = { -1,-1,-1,0,1,1,1,0 };
int dy[8] = { -1,0,1,1,1,0,-1,-1 };

int visited[101][101];
int n, m;
int a[101][101];
void Try(int i, int j) {
    for (int k = 0; k < 8; k++) {
        int i1 = dx[k] + i;
        int j1 = dy[k] + j;
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            a[i1][j1] = 0;
            Try(i1, j1);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    a[i][j] = 0;
                    cnt++;
                    Try(i, j);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}