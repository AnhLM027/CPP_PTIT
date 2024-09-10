#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[100][100];
        int tmp[1000];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1;
        int c1 = 0, c2 = m - 1;
        int cnt = 0;
        while (h1 <= h2 && c1 <= c2) {
            for (int i = c1; i <= c2; i++) tmp[cnt++] = a[h1][i];
            h1++;
            for (int i = h1; i <= h2; i++) tmp[cnt++] = a[i][c2];
            c2--;
            if (h1 > h2 || c1 > c2) break;
            for (int i = c2; i >= c1; i--) tmp[cnt++] = a[h2][i];
            h2--;
            for (int i = h2; i >= h1; i--) tmp[cnt++] = a[i][c1];
            c1++;
        }
        for (int i = n * m - 1; i >= 0; i--) {
            cout << tmp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}