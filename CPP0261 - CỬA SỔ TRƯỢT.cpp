#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    short int n; cin >> n;
    int a[100][100];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    }
    int m; cin >> m;
    int b[100][100];
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) cin >> b[i][j];
    }
    for (int i = 1; i <= n; i += m) {
        for (int j = 1; j <= n; j += m) {
            for (int k = 1; k <= m; k++) {
                for (int l = 1; l <= m; l++) {
                    a[i + k - 1][j + l - 1] *= b[k][l];
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}