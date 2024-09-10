#include<bits/stdc++.h>
#define MOD 1000000007
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
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
        while (h1 < h2 && c1 < c2) {
            int tmp = a[h1][c1];
            for (int i = h1; i < h2; i++) {
                a[i][c1] = a[i + 1][c1];
            }
            for (int i = c1; i < c2; i++) {
                a[h2][i] = a[h2][i + 1];
            }
            for (int i = h2; i > h1; i--) {
                a[i][c2] = a[i - 1][c2];
            }
            for (int i = c2; i > c1; i--) {
                a[h1][i] = a[h1][i - 1];
            }
            a[h1][c1 + 1] = tmp;
            h1++, c1++, h2--, c2--;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            //cout << endl;
        }
        cout << endl;
    }
    return 0;
}