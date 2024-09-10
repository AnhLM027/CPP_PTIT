#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define AnhLM027 "Le Minh Anh"


char a[100][100];
int n;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int te; cin >> te;
    while (te--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> a[i][j];
        }
        int ans = 0;
        for (int sz = 1; sz <= n; sz++) {
            for (int i = 0; i <= n - sz; i++) {
                for (int j = 0; j <= n - sz; j++) {
                    bool check = true;
                    for (int k = 0; k < sz; k++) {
                        if (a[i + k][j] != 'X' || a[i + k][j + sz - 1] != 'X' ||
                            a[i][j + k] != 'X' || a[i + sz - 1][j + k] != 'X') {
                            check = false;
                            break;
                        }
                    }
                    if (check) ans = sz;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}