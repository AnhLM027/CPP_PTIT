#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int a[1005][1005];
int n, m;
pair<int, int> st, en;
int d[1005][1005];

void BFS() {
    queue <pair<int, int>> qe;
    qe.push({ st.first,st.second });
    while (!qe.empty()) {
        pair<int, int> tmp = qe.front(); qe.pop();
        int x = tmp.first, y = tmp.second;
        for (int i = 0; i < 4; i++) {
            int i1 = dx[i] + x;
            int j1 = dy[i] + y;
            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
                d[i1][j1] = d[x][y] + 1;
                qe.push({ i1,j1 });
                a[i1][j1] = 0;
                if (i1 == en.first && j1 == en.second) return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        memset(d, 0, sizeof(d));
        cin >> n >> m >> st.first >> st.second >> en.first >> en.second;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        if (a[st.first][st.second] == 0 || a[en.first][en.second] == 0) {
            cout << "-1\n";
            continue;
        }
        BFS();
        if (d[en.first][en.second]) cout << d[en.first][en.second] << endl;
        else cout << "-1" << endl;
    }
    return 0;
}